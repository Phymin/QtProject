#include "StateMachine.h"

template<typename T>
StateMachine<T>::StateMachine(T initState)
    : _currState(initState)
{

}
