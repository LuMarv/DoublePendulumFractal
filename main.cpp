#include "src/Simulation.hpp"
#include "src/IntegratorEuler.hpp"
#include "src/State.hpp"

int main() {
#ifdef USE_EULER
    run_simulation<IntegratorEuler>(10, 10, 100, 0.01);
#else
#error "No integrator selected! Define USE_EULER or USE_RK4."
#endif
  DoublePendulum<IntegratorEuler> p;
  p.printState();
  // test
  State s1(1.0, 2.0, 3.0, 4.0);
  State s2(1.0, 2.0, 3.0, 4.0);
  s1.print();
  s2.print();
  (s1 + s2).print();
}
