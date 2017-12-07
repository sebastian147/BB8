#include "DialogPuerto.h"
#include "ui_DialogPuerto.h"
#include <QMessageBox>
#include <QByteArray>
#include "mainwindow.h"

DialogPuerto::DialogPuerto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPuerto)
{
    ui->setupUi(this);
    portName = "";
    Flag=0;
    EnumerarPuertos();
}

DialogPuerto::~DialogPuerto()
{
    delete ui;

}
void DialogPuerto::EnumerarPuertos()
{
    ui->comboBox->clear();

    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();

    for (int i = 0; i < ports.size(); i++)
    {
        ui->comboBox->addItem(ports.at(i).portName()/*, ports.at(i).portName()*/);
    }
}

void DialogPuerto::on_comboBox_currentIndexChanged(int index)
{
    portName = ui->comboBox->itemText(index);//itemData(index).toString();    //recupero la data del item de indice index

}

void DialogPuerto::on_pushButtonConect_clicked()
{
    if(Flag==0)
    {
        ui->pushButtonConect->setText("Desconectar");
           Flag=1;

    }
    else
    {
        ui->pushButtonConect->setText("Conectar");
         Flag=0;
    }


}
QString DialogPuerto::Devolver_Puerto(void)
{
    if(Flag==1)
        return portName;
    else
        return NULL;
}
