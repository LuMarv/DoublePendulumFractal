#include "State.hpp"

// There is not too much to see here
void State::print() const {
  std::cout << "[ theta1=" << _theta1 << ", theta2=" << _theta2
            << ", omega1=" << _omega1 << ", omega2=" << _omega2 << " ]"
                                                                << std::endl;
  return;
}

State& State::operator+=(const State& other) {
  this->_theta1 += other._theta1;
  this->_theta2 += other._theta2;
  this->_omega1 += other._omega1;
  this->_omega2 += other._omega2;
  return *this;
}

State& State::operator*=(const double other) {
  this->_theta1 *= other;
  this->_theta2 *= other;
  this->_omega1 *= other;
  this->_omega2 *= other;
  return *this;
}

// non member functions
State operator+(const State& s1, const State& s2) {
  State res(s1);
  res += s2;
  return res;
}

// both directions of the scalar multiplication are overloaded :)
// direction 1
State operator*(const State& s, const double d) {
  State res(s);
  res *= d;
  return res;
}

// direction 2 (note the argument order)
State operator*(const double d, const State& s) {
  State res(s);
  res *= d;
  return res;
}
