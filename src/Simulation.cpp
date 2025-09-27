#include "Simulation.hpp"
#include "IntegratorEuler.hpp"

template<class Integrator>
void run_simulation(int N, int M, int steps, double dt){
  int entries = N * M;
  std::vector<DoublePendulum<Integrator>> pends(entries);
  // here is gonna go some cooooode!!!!
  return;
}

// Explicit instantiations
template void run_simulation<IntegratorEuler>(int, int, int, double);
