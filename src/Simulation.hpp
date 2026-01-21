#ifndef SIMULATION
#define SIMULATION

#include "DoublePendulum.hpp"
#include <vector>

template<class Integrator>

/*
The following arguments correspond to:
int N     - height in pixels for video of simulation
int M     - width in pixels for video of simulation
int steps - amount of integrator steps for each pendulum
double dt - step size for each integrator step
*/
void run_simulation(int N, int M, int steps, double dt);

#endif // SIMULATION
