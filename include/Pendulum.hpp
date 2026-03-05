#ifndef PENDULUM_HPP
#define PENDULUM_HPP

#include "State.hpp"
#include "IntegratorEuler.hpp"
#include "RHS.hpp"
#include <memory> // for smart pointers
#include <vector>

class Pendulum {
private:
  std::unique_ptr<Integrator> _I;
  State _y0;
  double _t_final;
  double _dt;
  std::vector<State>* _eval_states; // Pendulum doesn't own this memory (no need for memory management)
public:
  Pendulum(std::vector<State>& eval_states) : _I(std::make_unique<IntegratorEuler>()), _eval_states(&eval_states) {}
  Pendulum(std::vector<State>& eval_states, std::unique_ptr<Integrator> I) : _I(std::move(I)), _eval_states(&eval_states) {}
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
