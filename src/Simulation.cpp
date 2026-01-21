#include "Simulation.hpp"
#include "IntegratorEuler.hpp"
#include <iostream>

template<class Integrator>
void run_simulation(int N, int M, int steps, double dt){
  int entries = N * M;
  std::vector<DoublePendulum<Integrator>> pends(entries);
  // here is gonna go some cooooode!!!!
  std::cout << "Code reached this line" << '\n';
  return;
}

// Explicit instantiations
template void run_simulation<IntegratorEuler>(int, int, int, double);
