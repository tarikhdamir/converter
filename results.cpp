#include "results.h"
#include "ui_results.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QFileInfo>

results::results(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::results)
{
    ui->setupUi(this);
}

results::~results()
{

    delete ui;
}
