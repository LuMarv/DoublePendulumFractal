#ifndef PENDULUM_HPP
#define PENDULUM_HPP

#include "State.hpp"
#include "IntegratorEuler.hpp"
#include "RHS.hpp"
#include <memory> // for smart pointers

class Pendulum {
private:
  Integrator* _I;
public:
  Pendulum(Integrator* I) : _I(I) {}
  ~Pendulum() { delete _I; }
};

// implement run() -> see simulation.cpp (marvin)

#endif // PENDULUM_HPP
