#include "converter.h"
#include "results.h"
#include "ui_converter.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QFileInfo>

converter::converter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::converter)
{
    ui->setupUi(this);
}

converter::~converter()
{

    delete ui;
}

void converter::pz90_to_wgs84(coords* X){
    double x = X->getX();
    double y = X->getY();
    double z = X->getZ();


    double temp_x = (1 - 0.12e-6) * (x + y * -0.9696e-6 - 1.1);
    double temp_y = (1 - 0.12e-6) * (x * 0.9696e-6 + y - 0.3);
    double temp_z = (1 - 0.12e-6) * (z - 0.9);

    QString newX, newY, newZ;

    newX = QString::number(temp_x, 'g', 15);
    newY = QString::number(temp_y, 'g', 15);
    newZ = QString::number(temp_z, 'g', 15);

    ui->x_output->setText(newX);
    ui->y_output->setText(newY);
    ui->z_output->setText(newZ);

    QSqlDatabase db = QSqlDatabase::database("QSQLITE");
    db.open();
    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS result(X, Y, Z)");
    QString s = "INSERT INTO result (X, Y, Z) VALUES (" + newX + ", " + newY + ", " + newZ + ")";
    query.exec(s);
    db.close();

    return;
}

void converter::ck42_to_pz90(coords* X){
    double x = X->getX();
    double y = X->getY();
    double z = X->getZ();

    double temp_x = x + y * -3.1998e-6 + z * 1.6968e-6 + 25;
    double temp_y = x * 3.1998e-6 + y - 141;
    double temp_z = x * -1.6968e-6 + z - 80;

    coords* temp = new coords();
    temp->setX(temp_x);
    temp->setY(temp_y);
    temp->setZ(temp_z);

    pz90_to_wgs84(temp);
    delete temp;

    return;
}

void converter::pz90_to_ck42(coords* X){
    double x = X->getX();
    double y = X->getY();
    double z = X->getZ();

    double temp_x = x + y * +3.1998e-6 + z * -1.6968e-6 - 25;
    double temp_y = x * -3.1998e-6 + y + 141;
    double temp_z = x * +1.6968e-6 + z + 80;

    QString newX, newY, newZ;

    newX = QString::number(temp_x, 'g', 15);
    newY = QString::number(temp_y, 'g', 15);
    newZ = QString::number(temp_z, 'g', 15);

    ui->x_output->setText(newX);
    ui->y_output->setText(newY);
    ui->z_output->setText(newZ);

    QSqlDatabase db = QSqlDatabase::database("QSQLITE");
    db.open();
    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS result(X, Y, Z)");
    QString s = "INSERT INTO result (X, Y, Z) VALUES (" + newX + ", " + newY + ", " + newZ + ")";
    query.exec(s);
    db.close();

    return;
}

void converter::wgs84_to_pz90(coords* X){
    double x = X->getX();
    double y = X->getY();
    double z = X->getZ();


    double temp_x = (1 + 0.12e-6) * (x + y * 0.9696e-6 + 1.1);
    double temp_y = (1 + 0.12e-6) * (x * -0.9696e-6 + y + 0.3);
    double temp_z = (1 + 0.12e-6) * (z + 0.9);

    coords* temp = new coords();
    temp->setX(temp_x);
    temp->setY(temp_y);
    temp->setZ(temp_z);

    pz90_to_ck42(temp);
    delete temp;

    return;
}

int num = 0;

void converter::on_pushButton_clicked()
{
    coords* temp = new coords();
    double temp_x = ui->x_input->text().toDouble();
    double temp_y = ui->y_input->text().toDouble();
    double temp_z = ui->z_input->text().toDouble();
    temp->setX(temp_x);
    temp->setY(temp_y);
    temp->setZ(temp_z);

    if(!num){
        ck42_to_pz90(temp);
    }
    else{
        wgs84_to_pz90(temp);
    }

    delete temp;
    return;
}



void converter::on_pushButton_2_clicked()
{
    ui->statusbar->showMessage("Results are in debug tab");
    QSqlDatabase db = QSqlDatabase::database("QSQLITE");
    db.open();
    QSqlQuery query(db);
    query.exec("SELECT * from result");
    while(query.next()){
        qDebug() << query.value(0).toDouble() << " " << query.value(1).toDouble() << " " << query.value(2).toDouble() << "\n";
    }
    db.close();

    return;
}


void converter::on_pushButton_3_clicked()
{
    if(!num){
        ui->label_4->setText("WGS-84");
        ui->label_5->setText("CK-42");
        num = 1;
    }
    else{
        ui->label_5->setText("WGS-84");
        ui->label_4->setText("CK-42");
        num = 0;
    }

    return;
}

