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
  State _yfinal;
  double _t_final = 1;
  double _dt = 0.1;
  std::vector<State>* _eval_states; // Pendulum doesn't own this memory (no need for memory management)
  std::vector<double>* _eval_times; // Pendulum doesn't own this memory (no need for memory management)
public:
  Pendulum(std::vector<State>& eval_states) : _I(std::make_unique<IntegratorEuler>()), _eval_states(&eval_states) {}
  Pendulum(std::vector<State>& eval_states, std::unique_ptr<Integrator> I) : _I(std::move(I)), _eval_states(&eval_states) {}

  // argument constructor (this should be used in simulation)
  // gets: * eval_states - access to memory to save computed data in
  //       * eval_times  - time points for the for states that should be saved in eval_states
  //       * t_final     - integration horizon
  //       * I           - unique pointer to an Integrator
  //       * dt          - (initial) stepsize for computation
  //       * y0          - initial State for integration
  Pendulum(
    std::vector<State>& eval_states, 
    std::unique_ptr<Integrator> I, 
    double t_final,
    double dt,
    State y0,
    std::vector<double>& eval_times
  ) : _I(std::move(I)), _eval_states(&eval_states), _t_final(t_final), _dt(dt), _y0(y0), _eval_times(&eval_times) {}

  // destructor
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
