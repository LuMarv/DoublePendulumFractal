#include "DoublePendulum.hpp"
#include "IntegratorEuler.hpp"

// Constructor
template<class Integrator>
DoublePendulum<Integrator>::DoublePendulum(Integrator integrator)
              : _integrator(integrator) {}

template <typename Integrator>
void DoublePendulum<Integrator>::step(double dt) {
  _integrator.integrate(_state, dt);
}

// Print state
template <typename Integrator>
void DoublePendulum<Integrator>::printState() const {
    std::cout << "Theta1: " << _state._theta1 << ", Theta2: " << _state._theta2 << "\n";
}

// Explicit instantiations
template class DoublePendulum<IntegratorEuler>;
