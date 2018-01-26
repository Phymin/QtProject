#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "ModeSwitcher.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_manualBtn_clicked();

    void on_localBtn_clicked();

    void on_hostBtn_clicked();

private:
    Ui::Widget *ui;

    ModeSwitcher _modeSwither;
};

#endif // WIDGET_H
