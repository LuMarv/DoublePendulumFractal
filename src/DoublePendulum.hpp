#ifndef DOUBLE_PENDULUM
#define DOUBLE_PENDULUM

#include <iostream>
#include "State.hpp"

template <typename Integrator>
class DoublePendulum {
public:
    DoublePendulum(Integrator integrator = {});

    void step(double dt);
    void printState() const;

private:
    State _state;
    Integrator _integrator;
};

#endif /* DOUBLE_PENDULUM */
