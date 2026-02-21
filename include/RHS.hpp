#ifndef PENDULUM_RHS_HPP
#define PENDULUM_RHS_HPP

#include "State.hpp"
#include <cmath>

namespace RHSfunc {
  // RHS of the system still requires implementation
  // might be that we want to pass paramrters as well
  State dpRHS(State& s);
}

#endif // PENDULUM_RHS_HPP
