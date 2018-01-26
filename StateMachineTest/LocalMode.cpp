#include "LocalMode.h"

#include <QDebug>

LocalMode::LocalMode()
{

}

bool LocalMode::enter()
{
    qDebug() << "Agv now is in Local Mode.";
    return true;
}

bool LocalMode::exit()
{
    qDebug() << "Agv now exits LocalMode";
    return true;
}

AgvMode LocalMode::getMode() const
{
    return AgvMode::LocalMode;
}
