#ifndef INTEGRATOR
#define INTEGRATOR

#include <vector>
#include "State.hpp"

class Integrator {
public:
  // needed for proper polymorphic deletion
  virtual ~Integrator() = default;

  // pure virtual function ("= 0") achives two things:
  // 1. needs to be implemented in each sub class
  // 2. prohibits user from generating objects of type Integrator (abstr. class)
  virtual void integrate(
    const double t0,                  // starting time for integration
    const double t1,                  // final time for integration
    const State& y,                   // initial state for integration
    const double dt,                  // step size (or first step size if adaptive)
    const std::vector<double>& t_eval // points in time for which to save States
  ) = 0;
};

#endif // INTEGRATOR
