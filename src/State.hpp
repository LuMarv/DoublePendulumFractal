#ifndef STATE
#define STATE

#include <iostream>

class State {
public:
  State() : _theta1(0.0), _theta2(0.0), _omega1(0.0), _omega2(0.0) {}
  State(double theta1, double theta2, double omega1, double omega2) :
        _theta1(theta1), _theta2(theta2), _omega1(omega1), _omega2(omega2) {};

  void print();

  double _theta1;
  double _theta2;
  double _omega1;
  double _omega2;
};

#endif /* end of include guard: STATE */
