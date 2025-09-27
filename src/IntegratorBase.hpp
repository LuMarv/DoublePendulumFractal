#ifndef INTEGRATOR_BASE
#define INTEGRATOR_BASE

#include "State.hpp"

template<class IntegratorType>
class IntegratorBase {
public:
  void integrate(State& s, double dt) {
    static_cast<IntegratorType*>(this)->integrateImpl(s, dt);
  }
};

#endif /* INTEGRATOR_BASE */
