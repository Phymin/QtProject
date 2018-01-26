#include "ManualMode.h"

#include <QDebug>

ManualMode::ManualMode()
{

}

bool ManualMode::enter()
{
    qDebug() << "Agv is now in Manual mode.";
    return true;
}

bool ManualMode::exit()
{
    qDebug() << "Agv now exits Manual Mode.";
    return true;
}

AgvMode ManualMode::getMode() const
{
    return AgvMode::ManualMode;
}
