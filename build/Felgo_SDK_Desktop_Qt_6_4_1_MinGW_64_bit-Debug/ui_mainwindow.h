/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *lblDeskripcija;
    QLabel *lblDeskripcijaImg;
    QLabel *lblTemperatura;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *lblVjetar;
    QLabel *label_8;
    QLabel *lblVlaznost;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *lblGrad;
    QLabel *lblDrzava_2;
    QLabel *label_3;
    QLabel *lblPraviOsjecaj;
    QLabel *label_2;
    QLabel *lblMax;
    QLabel *label_9;
    QLabel *lblMin;
    QTextEdit *txtJsonString;
    QPushButton *btnPrikaziDetalje;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblDrzava;
    QComboBox *cmbDrzava;
    QLineEdit *txtZipCode;
    QPushButton *btnIdi;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 750);
        MainWindow->setMinimumSize(QSize(700, 750));
        MainWindow->setMaximumSize(QSize(700, 750));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 70, 620, 251));
        groupBox->setMinimumSize(QSize(620, 0));
        groupBox->setMaximumSize(QSize(620, 16777215));
        lblDeskripcija = new QLabel(groupBox);
        lblDeskripcija->setObjectName("lblDeskripcija");
        lblDeskripcija->setGeometry(QRect(20, 40, 131, 16));
        lblDeskripcijaImg = new QLabel(groupBox);
        lblDeskripcijaImg->setObjectName("lblDeskripcijaImg");
        lblDeskripcijaImg->setGeometry(QRect(200, 40, 111, 16));
        lblTemperatura = new QLabel(groupBox);
        lblTemperatura->setObjectName("lblTemperatura");
        lblTemperatura->setGeometry(QRect(30, 80, 120, 70));
        lblTemperatura->setMinimumSize(QSize(120, 70));
        lblTemperatura->setMaximumSize(QSize(120, 70));
        QFont font;
        font.setPointSize(40);
        lblTemperatura->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 80, 49, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 100, 51, 51));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 90, 49, 16));
        lblVjetar = new QLabel(groupBox);
        lblVjetar->setObjectName("lblVjetar");
        lblVjetar->setGeometry(QRect(280, 80, 41, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 120, 61, 16));
        lblVlaznost = new QLabel(groupBox);
        lblVlaznost->setObjectName("lblVlaznost");
        lblVlaznost->setGeometry(QRect(280, 120, 49, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(370, 90, 71, 16));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(370, 120, 49, 16));
        lblGrad = new QLabel(groupBox);
        lblGrad->setObjectName("lblGrad");
        lblGrad->setGeometry(QRect(470, 90, 121, 16));
        lblDrzava_2 = new QLabel(groupBox);
        lblDrzava_2->setObjectName("lblDrzava_2");
        lblDrzava_2->setGeometry(QRect(470, 120, 141, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 190, 101, 20));
        lblPraviOsjecaj = new QLabel(groupBox);
        lblPraviOsjecaj->setObjectName("lblPraviOsjecaj");
        lblPraviOsjecaj->setGeometry(QRect(140, 190, 49, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 190, 63, 20));
        lblMax = new QLabel(groupBox);
        lblMax->setObjectName("lblMax");
        lblMax->setGeometry(QRect(280, 190, 63, 20));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(350, 190, 63, 20));
        lblMin = new QLabel(groupBox);
        lblMin->setObjectName("lblMin");
        lblMin->setGeometry(QRect(420, 190, 63, 20));
        txtJsonString = new QTextEdit(centralwidget);
        txtJsonString->setObjectName("txtJsonString");
        txtJsonString->setGeometry(QRect(10, 360, 641, 251));
        btnPrikaziDetalje = new QPushButton(centralwidget);
        btnPrikaziDetalje->setObjectName("btnPrikaziDetalje");
        btnPrikaziDetalje->setGeometry(QRect(10, 320, 111, 29));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 611, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblDrzava = new QLabel(layoutWidget);
        lblDrzava->setObjectName("lblDrzava");

        horizontalLayout->addWidget(lblDrzava);

        cmbDrzava = new QComboBox(layoutWidget);
        cmbDrzava->setObjectName("cmbDrzava");

        horizontalLayout->addWidget(cmbDrzava);

        txtZipCode = new QLineEdit(layoutWidget);
        txtZipCode->setObjectName("txtZipCode");

        horizontalLayout->addWidget(txtZipCode);

        btnIdi = new QPushButton(layoutWidget);
        btnIdi->setObjectName("btnIdi");

        horizontalLayout->addWidget(btnIdi);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Trenutno Vrijeme", nullptr));
        lblDeskripcija->setText(QCoreApplication::translate("MainWindow", "Vremenski opis", nullptr));
        lblDeskripcijaImg->setText(QCoreApplication::translate("MainWindow", "Vrijeme Logo", nullptr));
        lblTemperatura->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "o", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Vjetar", nullptr));
        lblVjetar->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Vla\305\276nost", nullptr));
        lblVlaznost->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Grad", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Drzava", nullptr));
        lblGrad->setText(QCoreApplication::translate("MainWindow", "\304\214ikago", nullptr));
        lblDrzava_2->setText(QCoreApplication::translate("MainWindow", "SAD", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pravi Osjecaj", nullptr));
        lblPraviOsjecaj->setText(QCoreApplication::translate("MainWindow", "17.5", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        lblMax->setText(QCoreApplication::translate("MainWindow", "19", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        lblMin->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        btnPrikaziDetalje->setText(QCoreApplication::translate("MainWindow", "Prkazi Detalje", nullptr));
        lblDrzava->setText(QCoreApplication::translate("MainWindow", "Drzava", nullptr));
        btnIdi->setText(QCoreApplication::translate("MainWindow", "Idi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
