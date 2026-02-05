#ifndef INTEGRATOR
#define INTEGRATOR

class Integrator {
public:
  // needed for proper polymorphic deletion
  virtual ~Integrator() = default;

  // pure virtual function ("= 0") achives two things:
  // 1. needs to be implemented in each sub class
  // 2. prohibits user from generating objects of type Integrator (abstr. class)
  virtual void integrate(double t0, double t1, State& y, double dt) = 0;
};

#endif // INTEGRATOR
