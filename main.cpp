#include "converter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    converter w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.open();
    w.show();
    return a.exec();
}
