#ifndef LOCALMODE_H
#define LOCALMODE_H

#include "Mode.h"


class LocalMode : public Mode
{
public:
    LocalMode();

    // Mode interface
public:
    bool enter() override;
    bool exit() override;
    AgvMode getMode() const override;
};

#endif // LOCALMODE_H
