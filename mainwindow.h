#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    int on_btnIdi_clicked();
    void on_btnPrikaziDetalje_clicked();

private:
    Ui::MainWindow *ui;
    void getDrzavaList();
    QStringList drzavaListsaKodom;
    void populateCombBox();
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    void onWeatherDataReceived();
    void showWeatherLogo(int);


};
#endif // MAINWINDOW_H
