#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QByteArray>
#include "DialogPuerto.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(340, 460);
//connect(ui->verticalSlider, SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    QPixmap pix("://files/bb8.png");
      ui->label->setPixmap(pix);

    QPixmap pixp("/home/montty/Escritorio/sw2.png");
        ui->label_2->setPixmap(pixp);

    port = NULL;
    portName = "";
   grabKeyboard();
   velocidad =0;
    Llegoeldato=0;
    Estaconectado=0;
    timer =new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Tiempo_Terminado()));

   //releaseKeyboard();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete port;
}


void MainWindow::on_port_readyRead()
{
    QByteArray aux;
    if(Estaconectado==1)
    {
        aux.resize(port->bytesAvailable());
        port->read(aux.data(),aux.size());
        Llegoeldato=1;
        timer->start(10000);
    }
}
void MainWindow::Tiempo_Terminado()
{
    if(Llegoeldato == 1)
     {
        QMessageBox::critical(this,"ERROR","Se Desconecto ");
        Estaconectado=0;
        Llegoeldato=0;
        delete port;
        port = NULL;
      }
    else
    {
    //    QMessageBox::critical(this,"ERROR","Programaste mal ");
        Estaconectado=0;
    }
}


void MainWindow::on_pushButtonConectar_clicked()
{
    DialogPuerto d;
    releaseKeyboard();
    if(d.exec() == QDialog::Accepted)
      {
        portName=d.Devolver_Puerto();
         // close();

      }
         if(!port)
         {
            port = new QSerialPort(portName);
            port->setBaudRate(QSerialPort::Baud115200);
            port->setFlowControl(QSerialPort::NoFlowControl);
            port->setParity(QSerialPort::NoParity);
            port->setDataBits(QSerialPort::Data8);
            port->setStopBits(QSerialPort::OneStop);

             if(!port->open(QIODevice::ReadWrite))
                {
                    QMessageBox::critical(this,"Error","No se puede abrir el puerto " + port->portName());
                    delete port;
                    port = NULL;
                    Estaconectado=0;
                }
             else
                {
                  //  ui->pushButtonConect->setText("Desconectar");
                    connect(port,SIGNAL(readyRead()),this,SLOT(on_port_readyRead()));
                    QMessageBox::critical(this,"Le pegaste!","Me conecte! " + port->portName());
                    Estaconectado=1;
                }
          }
             else
                {
                    delete port;
                    port = NULL;
                    Estaconectado=0;
                }

                // close();
         grabKeyboard();
}



void MainWindow::on_pushButtonLeftUp_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(107);
        port->write(aux);//manda dato flecha izq-arriba

    }
    else
    {
        releaseKeyboard();
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
        grabKeyboard();

        //QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButtonUp_clicked()
{

    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(102);
        port->write(aux);//manda dato flecha arriba

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButtonRightup_clicked()
{

    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(106);
        port->write(aux);//manda dato derecha-arriba

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButtonLeftDown_clicked()
{

    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(109);
        port->write(aux);//manda dato flecha izq-abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButtonDown_clicked()
{

    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(103);
        port->write(aux);//manda dato flecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButtonRightDown_clicked()
{

    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(108);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}




void MainWindow::on_pushButton_head2_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(110);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButton_head3_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(111);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButton_head4_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(112);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButton_stop_clicked()
{

    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(101);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
      QString tecla;
     tecla = char(event->key());
     if((tecla == 'w') || (tecla == 'W'))
      {
         this->on_pushButtonUp_clicked();
     }
     if((tecla == 'S') || (tecla == 's'))
      {
         this->on_pushButtonDown_clicked();
     }
     if((tecla == 'F') || (tecla == 'f'))
      {
         this->on_pushButton_clicked();
     }
     if((tecla == 'Q') || (tecla == 'q'))
      {
         this->on_pushButtonLeftUp_clicked();
     }
     if((tecla == 'E') || (tecla == 'e'))
      {
         this->on_pushButtonRightup_clicked();
     }
     if((tecla == 'a') || (tecla == 'A'))
      {
         this->on_pushButtonLeftDown_clicked();
     }
     if((tecla == 'd') || (tecla == 'D'))
      {
         this->on_pushButtonRightDown_clicked();
     }
     if((tecla == 'h') || (tecla == 'H'))
      {
         this->on_pushButton_head2_clicked();
     }
     if((tecla == 'j') || (tecla == 'J'))
      {
           this->on_pushButton_head3_clicked();
     }
     if((tecla == 'K') || (tecla == 'k'))
      {
         this->on_pushButton_head4_clicked();
     }
     if((tecla == 'y') || (tecla == 'Y'))
      {
         this->on_pushButton_turnl7_clicked();
     }
     if((tecla == 'u') || (tecla == 'U'))
      {
           this->on_pushButton_turnr6_clicked();
     }
     if((tecla == 'i') || (tecla == 'I'))
      {
         this->on_pushButton_stop_clicked();
     }
     if((tecla == 'z') || (tecla == 'Z'))
      {
           this->on_toolButton_clicked();
     }
     if((tecla == 'X') || (tecla == 'x'))
      {
         this->on_toolButton_2_clicked();
     }



   // grabKeyboard( );
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{

    //releaseKeyboard();
}



void MainWindow::on_pushButton_turnr6_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(105);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButton_turnl7_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(104);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(port)//si esta conectado
    {
        QByteArray aux;
        aux.append(114);
        port->write(aux);//manda dato flecha derecha abajo

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }
 }


void MainWindow::on_toolButton_clicked()
{
    QByteArray aux;

    if(port)//si esta conectado
    {
        if(velocidad <100)
        {
          velocidad+=10;
          aux.append(113);
          port->write(aux);//manda dato flecha derecha abajo
          aux.append(velocidad);
          port->write(aux);//manda dato flecha derecha abajo
          ui->lcdNumber->display(velocidad);
        }
        else
        {
            QMessageBox::critical(this, "Error", QString::fromUtf8("La velocidad es la maxima"));

        }

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }

}

void MainWindow::on_toolButton_2_clicked()
{
    QByteArray aux;

    if(port)//si esta conectado
    {
        if(velocidad > 0)
        {
          velocidad-=10;
        aux.append(113);
          port->write(aux);//manda dato flecha derecha abajo
          aux.append(velocidad);
          port->write(aux);//manda dato flecha derecha abajo
          ui->lcdNumber->display(velocidad);
        }
        else
        {
            QMessageBox::critical(this, "Error", QString::fromUtf8("La velocidad es la minima"));

        }

    }
    else
    {
        QMessageBox::critical(this, "Error", QString::fromUtf8("No hay ningún puerto abierto"));
    }

}
