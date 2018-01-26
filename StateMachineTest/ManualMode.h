#ifndef MANUALMODE_H
#define MANUALMODE_H

#include "Mode.h"


class ManualMode : public Mode
{
public:
    ManualMode();

    // Mode interface
public:
    bool enter() override;
    bool exit() override;
    AgvMode getMode() const override;
};

#endif // MANUALMODE_H
