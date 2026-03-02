#ifndef PENDULUM_HPP
#define PENDULUM_HPP

#include "State.hpp"
#include "IntegratorEuler.hpp"
#include "RHS.hpp"
#include <memory> // for smart pointers

class Pendulum {
private:
  std::unique_ptr<Integrator> _I;
public:
  Pendulum() : _I(std::make_unique<IntegratorEuler>()) {}
  Pendulum(std::unique_ptr<Integrator> I) : _I(std::move(I)) {}
  ~Pendulum() = default;

  // make this non-copyable!!! safer...
  Pendulum(const Pendulum&) = delete;
  Pendulum& operator=(const Pendulum&) = delete;

  Pendulum(Pendulum&&) = default;
  Pendulum& operator=(Pendulum&&) = default;

  // methods
  void run();

  // testing only
  // grabs raw pointer from smart pointer
  Integrator* getIntegrator() const { return _I.get(); }
};

// implement run() -> see simulation.cpp (marvin)

#endif // PENDULUM_HPP
