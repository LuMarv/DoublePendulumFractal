#ifndef SIMULATION_HH
#define SIMULATION_HH

#include "../include/IntegratorEuler.hpp"
#include "../include/Pendulum.hpp"
#include <vector>

void simulate(const int integrator_index, const double time_end, const double step_size);

#endif //SIMULATION_HH