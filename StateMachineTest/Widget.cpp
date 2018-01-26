#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    _modeSwither(AgvMode::ManualMode)
{
    ui->setupUi(this);
    ui->label->setText("Current mode: Manual");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_manualBtn_clicked()
{
    if (_modeSwither.setMode(AgvMode::ManualMode))
    {
        ui->label->setText("Current mode: Manual");
    }
}

void Widget::on_localBtn_clicked()
{
    if (_modeSwither.setMode(AgvMode::LocalMode))
    {
        ui->label->setText("Current mode: Local");
    }
}

void Widget::on_hostBtn_clicked()
{
    if (_modeSwither.setMode(AgvMode::HostMode))
    {
        ui->label->setText("Current mode: Host");
    }
}
