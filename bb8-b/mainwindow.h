#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QStylePainter>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtCore>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
   void  keyPressEvent(QKeyEvent *event);
   void keyReleaseEvent(QKeyEvent *event);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_pushButtonConectar_clicked();
    void on_port_readyRead();

    void on_pushButtonLeftUp_clicked();
    void on_pushButtonUp_clicked();
    void on_pushButtonRightup_clicked();
    void on_pushButtonLeftDown_clicked();
    void on_pushButtonDown_clicked();
    void on_pushButtonRightDown_clicked();
    void on_pushButton_stop_clicked();
    void on_pushButton_turnr6_clicked();
    void on_pushButton_turnl7_clicked();

    void on_pushButton_head2_clicked();
    void on_pushButton_head3_clicked();
    void on_pushButton_head4_clicked();


    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void Tiempo_Terminado();

private:
    Ui::MainWindow *ui;
    QString portName;//revisar
    QSerialPort *port;//revisar
    int velocidad;
    int Llegoeldato;
    QTimer *timer;
    int Estaconectado;
};

#endif // MAINWINDOW_H


