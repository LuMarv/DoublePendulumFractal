#ifndef INTEGRATOR_EULER
#define INTEGRATOR_EULER

#include "IntegratorBase.hpp"

class IntegratorEuler : public IntegratorBase<IntegratorEuler> {
public:
  void integrateImpl(State& s, double dt);
};

#endif /* INTEGRATOR_EULER */
