#ifndef INTEGRATOREULER
#define INTEGRATOREULER

#include <vector>
#include <stdexcept>
#include <iostream>
#include "State.hpp"
#include "Integrator.hpp"
#include "RHS.hpp"
#include <exception>

class IntegratorEuler final : public Integrator {
public:
  // for description look at base class hpp file
  void integrate(
    const double t0,
    const double t1,
    State y,
    const double dt,
    const std::vector<double>& t_eval,
    std::vector<State>& eval_states
  ) override;
};


#endif // INTEGRATOREULER
