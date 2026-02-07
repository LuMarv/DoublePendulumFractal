#ifndef INTEGRATOREULER
#define INTEGRATOREULER

#include <vector>
#include "State.hpp"
#include "Integrator.hpp"

class IntegratorEuler final : public Integrator {
public:
  // for description look at base class hpp file
  void integrate(
    const double t0,
    const double t1,
    const State& y,
    const double dt,
    const std::vector<double>& t_eval
  ) override;
};

#endif // INTEGRATOREULER
