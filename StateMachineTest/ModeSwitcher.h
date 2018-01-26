#ifndef MODESTWICHER_H
#define MODESTWICHER_H

#include "Mode.h"
#include "ManualMode.h"
#include "LocalMode.h"
#include "HostMode.h"

class ModeSwitcher
{
public:
    ModeSwitcher(AgvMode initMode);

    bool setMode(AgvMode newMode);
    AgvMode getAgvMode() const;

private:
    bool switchMode(AgvMode newMode);
private:
    ManualMode _manualMode;
    LocalMode _localMode;
    HostMode _hostMode;
    Mode* _currMode;
};

#endif // MODESTWICHER_H
