#include "src/Simulation.hpp"
#include "src/IntegratorEuler.hpp"

int main() {
#ifdef USE_EULER
    run_simulation<IntegratorEuler>(10, 10, 100, 0.01);
#else
#error "No integrator selected! Define USE_EULER or USE_RK4."
#endif
}
