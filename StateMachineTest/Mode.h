#ifndef MODE_H
#define MODE_H

enum class AgvMode
{
    UnknownMode,
    ManualMode,
    LocalMode,
    HostMode,
};

class Mode
{
public:
    Mode();

    virtual bool enter() = 0;
    virtual bool exit() = 0;

    virtual AgvMode getMode() const = 0;
};

#endif // MODE_H
