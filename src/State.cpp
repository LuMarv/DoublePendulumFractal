#include "State.hpp"

void State::print() {
  std::cout << "[ " << _theta1 << ", " << _theta2 << ", " << _omega1
                                        << ", " << _omega2 << " ]" << std::endl;
  return;
}
