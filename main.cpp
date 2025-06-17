#include "mainwindow.h"
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QString styleSheet = "QWidget{font-size :16px;}";
    a.setStyleSheet(styleSheet);

    QLabel *label =w.findChild<QLabel*>("lblTemperatura");

    if(label)
    {
        label->setStyleSheet("QWidget{font-size :50px;}");
    }
    w.show();
    return a.exec();
}

