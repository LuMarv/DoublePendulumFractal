#include "../include/RHS.hpp"


// todo #1

State RHSfunc::dpRHS(const State& s) {
  // we can specify masses here for now, although we will probably not neet them
  double m1 = 1, double m2 = 1, double l1 = 1, double l2 = 1;
  double G = 9.81; // or set to one? And where?

  double theta1_dot = (s.p1()-l1/l2*s.p2()*cos(s.theta2()-s.theta1())) / (l1*l1* (m1+m2+m2*pow(cos(s.theta2()-s.theta1())), 2) );
  double theta2_dot = 1/(m2*l2*l2) * (s.p2() - m1*l1*l2*theta1_dot*cos(s.theta2()-s.theta1()));
  double p1_dot = m2*l1*l2*theta1_dot*theta2_dot*sin(s.theta2()-s.theta1()) - G * l1*(m1+m2)*sin(s.theta1());
  double p2_dot = m2*l1*l2*theta1_dot*cos(s.theta2()-s.theta1()) + m2*l2*l2*theta2_dot;

  State ds(theta1_dot, theta2_dot, p1_dot, p2_dot);
  return ds;
}
