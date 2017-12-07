#ifndef DIALOGPORT_H
#define DIALOGPORT_H

#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class DialogPuerto;
}

class DialogPuerto : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPuerto(QWidget *parent = 0);
    QString Devolver_Puerto(void);

    ~DialogPuerto();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButtonConect_clicked();

private:
    void EnumerarPuertos();
    QString portName;
    int Flag;
    Ui::DialogPuerto *ui;
};

#endif // DIALOGPORT_H
