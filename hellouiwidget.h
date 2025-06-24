#ifndef HELLOUIWIDGET_H
#define HELLOUIWIDGET_H

#include <QWidget>

namespace Ui {
class HelloUIWidget;//前向声明，表示 Ui 名字空间里有一个叫 HelloUIWidget 的类
}

class HelloUIWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HelloUIWidget(QWidget *parent = nullptr);
    ~HelloUIWidget();

signals: //声明信号
    void sendMsg(QString str);

private slots: //声明槽函数
    void on_pushButton_clicked();
    void printText(const QString& text);

private:
    Ui::HelloUIWidget *ui;
    void updateLabel();
};

#endif // HELLOUIWIDGET_H
