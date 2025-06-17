#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<qDebug>
#include<QNetworkAccessManager>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    populateCombBox();
    ui->txtJsonString->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::populateCombBox()
{
    getDrzavaList();
    ui->cmbDrzava->addItems(drzavaListsaKodom);

}

void MainWindow::getDrzavaList()
{
    drzavaListsaKodom = {
        "AD - Andora",
        "AF - Afganistan",
        "AL - Albanija",
        "AM - Armenija",
        "AR - Argentina",
        "AT - Austrija",
        "AU - Australija",
        "BA - Bosna i Hercegovina",
        "BB - Barbados",
        "BG - Bugarska",
        "BO - Bolivija",
        "BR - Brazil",
        "CA - Kanada",
        "CH - Svicarska",
        "CN - Kina",
        "CU - Kuba",
        "CZ - Ceska Republika",
        "DE - Njemacka",
        "DK - Danska ",
        "EC - Ekvador",
        "EE - Estonija",
        "EG - Egipat",
        "ES - Spanija",
        "FI - Finska",
        "FR - Francuska",
        "GB - Ujedinjeno Kraljevstvo",
        "GR - Grcka",
        "HR - Hrvatska",
        "HU - Madjarska",
        "IE - Irska",
        "IN - Indija",
        "IR - Iran",
        "IT - Italija",
        "JO - Jordan",
        "JP - Japan",
        "KR - Južna Korea",
        "US - SAD",
        "KW - Kuvajt",
        "LB - Libanon",
        "MC - Monako",
        "ME - Crna Gora",
        "NO - Norveska",
        "OM - Oman",
        "PS - Palestina",
        "PT - Portugal",
        "SA - Saudijska Arabija",
        "SE - Svedska",
        "UA - Ukrajina",
        "ZA - Juzna Afrika",



    };



}

int MainWindow::on_btnIdi_clicked()
{
    QString DrzavaKod, zipKod, apiKey;
    apiKey ="6c55ed92cf66b85d969c55336f47e398";
    DrzavaKod = ui -> cmbDrzava->currentText().split("-")[0].trimmed();
    zipKod = ui->txtZipCode->text();

    QString url = QString ("https://api.openweathermap.org/data/2.5/weather?zip=%1,%2&appid=%3").arg(zipKod).arg(DrzavaKod).arg(apiKey);

    qDebug() <<url;

    manager = new QNetworkAccessManager(this);
    QNetworkRequest request((QUrl(url)));

    reply= manager->get(request);

    connect(reply, &QNetworkReply::finished, this, &MainWindow::onWeatherDataReceived);

    if(reply->error()!= QNetworkReply::NoError)
    {
        qDebug() << "Network Error: "<<reply->errorString();
        return -1;

    }
}
void MainWindow::onWeatherDataReceived()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());

    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray repponseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(repponseData);
        QJsonObject jsonObj = jsonDoc.object();
        QString jsonString = jsonDoc.toJson(QJsonDocument::Indented);
        qDebug() <<jsonString;

        ui->txtJsonString->setText(jsonString);

        QString weatherDescription = jsonObj["weather"].toArray()[0].toObject()["description"].toString();
        qDebug () << "Vremenska Uslovi: "<< weatherDescription;
        int weatherConditionCode = jsonObj["weather"].toArray()[0].toObject()["id"].toInt();
        qDebug () << "Vremenska Uslovi: "<< weatherConditionCode;
        double brzinaVjetra = jsonObj["wind"].toObject()["speed"].toDouble();
        qDebug () << "brzinaVjetra: "<< brzinaVjetra;
        QString grad = jsonObj["naziv"].toString();
        qDebug () << "naziv: "<<  grad;
        QString drzava = jsonObj["sys"].toObject()["drzava"].toString();
        qDebug () << "drzava: "<<  drzava;
        double temperatura =  jsonObj["main"].toObject()["temp"].toDouble() -273.15;
        double temp_max =  jsonObj["main"].toObject()["temp_max"].toDouble() -273.15;
        double temp_min =  jsonObj["main"].toObject()["temp_min"].toDouble() - 273.15;
        double pravi_osjecaj = jsonObj["main"].toObject()["feels_like"].toDouble() - 273.15;
        double vlaznost = jsonObj["main"].toObject()["humidity"].toDouble();

        ui->lblTemperatura->setText(QString::number(temperatura));
        ui->lblVjetar->setText(QString::number(brzinaVjetra));
        ui->lblPraviOsjecaj->setText(QString::number(pravi_osjecaj));
        ui->lblDeskripcija->setText(weatherDescription);
        ui->lblVlaznost->setText(QString::number(vlaznost));
        ui->lblMax->setText(QString::number(temp_max));
        ui->lblMin->setText(QString::number(temp_min));

        showWeatherLogo(weatherConditionCode);

    }
    else
    {
        qDebug()<<" Error :"<<reply->error();
    }

    reply->deleteLater();
}


void MainWindow::on_btnPrikaziDetalje_clicked()
{
    if(ui->txtJsonString->isVisible())
        ui->txtJsonString->hide();
    else
        ui->txtJsonString->show();
}

void MainWindow::showWeatherLogo(int weatherConditionCode)
{
    qDebug() <<"u showWeatherLogo()";
    QString imgName;
    switch(weatherConditionCode)
    {
    case 803: imgName = "803.jpg"; break;
    default: imgName = "803.jpg"; break;
    }

    ui->lblDeskripcijaImg->setPixmap(QPixmap(":/images/803.png"));
}
