#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QTcpServer *_server;//服务端
    QTcpSocket *_socket;//

private slots:
    void on_btn_send_clicked();

    void on_pushButton_clicked();

    void recv_info();//接收数据的槽函数
    void slotConnect();//处理客户端连接
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
