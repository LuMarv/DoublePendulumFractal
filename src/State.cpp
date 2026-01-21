#include "State.hpp"

// There is not too much to see here
void State::print() {
  std::cout << "[ " << _theta1 << ", " << _theta2 << ", " << _omega1
                                        << ", " << _omega2 << " ]" << std::endl;
  return;
}

State State::operator+(State other) {
  State res(
    this->_theta1 + other._theta1,
    this->_theta2 + other._theta2,
    this->_omega1 + other._omega1,
    this->_omega2 + other._omega2
  );
  return res;
}

State State::operator*(double other) {
  State res(
    this->_theta1 * other,
    this->_theta2 * other,
    this->_omega1 * other,
    this->_omega2 * other
  );
  return res;
}
