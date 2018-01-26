#ifndef STATEMACHINE_H
#define STATEMACHINE_H


template<typename T>
class StateMachine
{
public:
    explicit StateMachine(T initState);

    virtual void setState(T newState) {}
    virtual T getState() { return _currState; }

private:
    T _currState;
};

#endif // STATEMACHINE_H
