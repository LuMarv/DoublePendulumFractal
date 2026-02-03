#include "IntegratorEuler.hpp"
#include "State.hpp"

State RHS(State& s) {
  // placeholder code
  State ds(0.1, 0.1, 0.1, 0.1);
  return ds;
}

void IntegratorEuler::integrateImpl(State& s, double dt) {
  // here an implementation is still missing
  s = s + RHS(s) * dt;
  return;
}

// needed for the linker, to know which implementation to choose
template class IntegratorBase<IntegratorEuler>;
