#include "ModeSwitcher.h"


ModeSwitcher::ModeSwitcher(AgvMode initMode)
    : _manualMode(),
      _localMode(),
      _hostMode(),
      _currMode(nullptr)
{
    //switchMode(initMode);
}

bool ModeSwitcher::setMode(AgvMode newMode)
{
    if (getAgvMode() == newMode) {
        return true;
    }

    return switchMode(newMode);
}

AgvMode ModeSwitcher::getAgvMode() const
{
    if (_currMode != nullptr)
        return _currMode->getMode();
    else
        return AgvMode::UnknownMode;
}

bool ModeSwitcher::switchMode(AgvMode newMode)
{
    if (_currMode != nullptr)
    {
        if (!_currMode->exit()) {
            return false;
        }
    }

    switch (newMode)
    {
    case AgvMode::ManualMode:
        _currMode = &_manualMode;
        break;
    case AgvMode::LocalMode:
        _currMode = &_localMode;
        break;
    case AgvMode::HostMode:
        _currMode = &_hostMode;
        break;
    default:
        _currMode = nullptr;
        break;
    }

    if (_currMode != nullptr)
    {
       return  _currMode->enter();
    }

    return false;
}
