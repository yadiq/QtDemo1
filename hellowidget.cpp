#include "hellowidget.h"

//自定义窗口，代码绘制UI
HelloWidget::HelloWidget(QWidget *parent) : QWidget{parent}
{
    resize(300, 200); //重新设置本窗口的尺寸
    m_labelInfo = new QLabel(tr("<h1>Hello Widget!</h1>"), this); //两个参数：文字，父窗口
    m_labelInfo->setGeometry(10, 10, 200, 40); //设置显示的矩形区域：左上宽高，单位像素

}

HelloWidget::~HelloWidget()
{
    delete m_labelInfo;
    m_labelInfo = NULL;
}
