#include "hellouiwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //Qt 图形界面程序的入口
    //QLabel label( QLabel::tr("Hello Qt!") ); //主界面显示的控件，可以是任意控件
    //label.show(); //显示控件窗口

    // HelloWidget hw; //自定义窗口，从QWidget类派生一个窗口作为主界面
    // hw.show();

    HelloUIWidget huiw; //自定义窗口，使用ui绘制布局
    huiw.show();

    return a.exec(); //进入Qt应用程序的事件循环函数等待用户操作（关闭窗口）
}
