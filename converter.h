#ifndef CONVERTER_H
#define CONVERTER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class converter; }
QT_END_NAMESPACE

class coords{
    double x;
    double y;
    double z;

    public:
        double getX(){
            return x;
        }

        double getY(){
            return y;
        }

        double getZ(){
            return z;
        }


        void setX(double val){
            x = val;
            return;
        }

        void setY(double val){
            y = val;
            return;
        }

        void setZ(double val){
            z = val;
            return ;
        }
};

class converter : public QMainWindow
{
    Q_OBJECT

public:
    converter(QWidget *parent = nullptr);
    ~converter();

private slots:
    void on_pushButton_clicked();
    void ck42_to_pz90(coords* X);
    void pz90_to_wgs84(coords* X);
    void pz90_to_ck42(coords* X);
    void wgs84_to_pz90(coords* X);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::converter *ui;
};
#endif // CONVERTER_H
