#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    _server=new QtcpServer;
    _server->listen(QHostADDress::Any,9988);
    connect(_server,SIGNAL(newConnection()),this,SLOT(slotConnect()));


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()//发送
{
   Qstring str1=ui->textEdit->toPlainText();

}

void Widget::on_pushButton_clicked()//退出
{

}
