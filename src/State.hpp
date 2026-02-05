#ifndef STATE
#define STATE

#include <iostream>

class State {
public:
  State() : _theta1(0.0), _theta2(0.0), _omega1(0.0), _omega2(0.0) {}
  State(double theta1, double theta2, double omega1, double omega2) :
        _theta1(theta1), _theta2(theta2), _omega1(omega1), _omega2(omega2) {};

  State& operator+=(const State& other);
  State& operator*=(const double other);

  void print() const;

  double _theta1;
  double _theta2;
  double _omega1;
  double _omega2;
};

// non member functions
State operator+(const State& s1, const State& s2);
State operator*(const State& s, const double d);
State operator*(const double d, const State& s);

#endif // STATE
