#ifndef HOSTMODE_H
#define HOSTMODE_H

#include "Mode.h"

class HostMode : public Mode
{
public:
    HostMode();

    // Mode interface
public:
    bool enter() override;
    bool exit() override;
    AgvMode getMode() const override;
};

#endif // HOSTMODE_H
