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

private slots:
    void on_pushButton_clicked();

private:
    Ui::HelloUIWidget *ui;
    void AdjustLabel();
};

#endif // HELLOUIWIDGET_H
