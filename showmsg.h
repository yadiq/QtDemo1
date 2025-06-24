#ifndef SHOWMSG_H
#define SHOWMSG_H

#include <QObject>

//接收信号，显示数据
class ShowMsg : public QObject
{
    Q_OBJECT
public:
    explicit ShowMsg(QObject *parent = 0);

signals:

public slots:
    void recvMsg(QString str);
};

#endif // SHOWMSG_H
