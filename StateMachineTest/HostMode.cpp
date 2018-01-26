#include "HostMode.h"

#include <QDebug>

HostMode::HostMode()
{

}

bool HostMode::enter()
{
    qDebug() << "Agv is now in Host mode.";
    return true;
}

bool HostMode::exit()
{
    qDebug() << "Agv now exits Host mode.";
    return true;
}

AgvMode HostMode::getMode() const
{
    return AgvMode::HostMode;
}
