#ifndef HELLOWIDGET_H
#define HELLOWIDGET_H

#include <QWidget>
#include <QLabel>

class HelloWidget : public QWidget
{
    Q_OBJECT //这个宏声明了 Qt 元对象系统必需的函数和成员变量
public:
    explicit HelloWidget(QWidget *parent = nullptr);
    ~HelloWidget();

    QLabel *m_labelInfo;//label
};

#endif // HELLOWIDGET_H
