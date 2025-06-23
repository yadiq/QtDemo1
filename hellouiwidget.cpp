#include "hellouiwidget.h"
#include "ui_hellouiwidget.h"
#include <QMessageBox>

HelloUIWidget::HelloUIWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HelloUIWidget)
{
    ui->setupUi(this);
    AdjustLabel();
}

HelloUIWidget::~HelloUIWidget()
{
    delete ui;
}

void HelloUIWidget::AdjustLabel() {
    ui->label->setText(tr("112233"));
    //ui->label->setStyleSheet(tr("color: red; background-color: rgb(0, 255, 255)"));
}

void HelloUIWidget::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("送餐"), tr("叮咚！外卖已送达"));
}
