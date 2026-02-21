#include "../include/IntegratorEuler.hpp"

// todo #2, maybe also implement a symplectic integrator

// implementations
void IntegratorEuler::integrate(const double t0,
                                const double t1,
                                const State& y,
                                const double dt,
                                const std::vector<double>& t_eval,
                                std::vector<State>& eval_states) {

  State dy;
  dy = dpRHS(y);

  try {
    double integration_time = t1-t0
    if(integration_time>0) {

      double time = t0
      double eval_counter = 0

      while(time < t1) {
        y += dt*dy;
        if(eval_counter < t_eval.size()) {
          eval_states.push_back(y);
          eval_counter++;
        }
      }
    }
    else {
      throw(integration_time)
    }
  }
  catch (double time){
    std::cout << "Error occured: The integration time is " << time << ", but should be larger than zero."
  }
  

  return;
}
