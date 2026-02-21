#include "../include/State.hpp"

void State::print() const {
  std::cout << "[ theta1=" << _vals[0] << ", theta2=" << _vals[1]
            << ", p1=" << _vals[2] << ", p2=" << _vals[3] << " ]"
                                                                << std::endl;
  return;
}

State& State::operator+=(const State& other) {
  for (int i = 0; i < 4; i++) {
    this->_vals[i] += other._vals[i];
  }
  return *this;
}

State& State::operator*=(const double other) {
  for (int i = 0; i < 4; i++) {
    this->_vals[i] *= other;
  }
  return *this;
}

// friend functions
std::ostream& operator<<(std::ostream& os, State& s) {
  os << "[ " << s._vals[0] << ", " << s._vals[1]
            << ", " << s._vals[2] << ", " << s._vals[3] << " ]";
  return os;
}
