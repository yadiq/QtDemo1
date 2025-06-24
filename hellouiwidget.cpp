#include "hellouiwidget.h"
#include "ui_hellouiwidget.h"
#include <QMessageBox>
#include <QDebug>

HelloUIWidget::HelloUIWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HelloUIWidget)
{
    ui->setupUi(this);
    updateLabel();
    //关联单行编辑控件的信号到标签控件的槽函数
    connect(ui->lineEdit, SIGNAL(textEdited(QString)), ui->label, SLOT(setText(QString)));
    connect(ui->lineEdit, SIGNAL(textEdited(QString)), this, SLOT(printText(QString)));
}

HelloUIWidget::~HelloUIWidget()
{
    delete ui;
}

//更新UI
void HelloUIWidget::updateLabel() {
    ui->label->setText(tr("112233"));
    //ui->label->setStyleSheet(tr("color: red; background-color: rgb(0, 255, 255)"));
}

//自动关联槽函数
void HelloUIWidget::on_pushButton_clicked()
{
    //QMessageBox::information(this, tr("送餐"), tr("叮咚！外卖已送达"));
    emit sendMsg(tr("叮咚！外卖已送达"));
}

//手动管理槽函数
void HelloUIWidget::printText(const QString &text)
{
    //获取信号源头对象的名称
    QString strObjectSrc = this->sender()->objectName();
    //打印到调试输出面板
    qDebug()<<strObjectSrc<<":"<<text;
}
