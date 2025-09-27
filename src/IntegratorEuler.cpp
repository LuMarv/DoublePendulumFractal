#include "IntegratorEuler.hpp"
#include "State.hpp"

void IntegratorEuler::integrateImpl(State& s, double dt) {
  // here an implementation is still missing
  return;
}

// needed for the linker to know, which implementation to choose
template class IntegratorBase<IntegratorEuler>;
