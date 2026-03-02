#include "../include/IntegratorEuler.hpp"

// todo #2, maybe also implement a symplectic integrator

// implementations
void IntegratorEuler::integrate(const double t0,
                                const double t1,
                                State y,
                                const double dt,
                                const std::vector<double>& t_eval,
                                std::vector<State>& eval_states) {

  State dy;
  dy = RHSfunc::dpRHS(y);

  try {
    double integration_time = t1-t0;
    if(integration_time > 0 && dt > 0) {

      double time = t0;
      double eval_counter = 0;

      // to save first state
      if(eval_counter < t_eval.size() && time <= t_eval[eval_counter]) {
        // or interpolate
        eval_states[eval_counter] = y;
        eval_counter++;
      }

      while(time < t1) {
        y += dt*dy;
        
        if(eval_counter < t_eval.size() && time <= t_eval[eval_counter]) {
          // or interpolate
          eval_states[eval_counter] = y;
          eval_counter++;
        }
        time += dt;
      }
    }
    else {
      throw(integration_time, dt);
    }
  }
  catch (double time, double dt){
    if(time <0){
      std::cerr << "Error occured: The integration time is " << time << ", but should be larger than zero.";
    }
    if(dt < 0){
      std::cerr << "Error occured: The time-integration interval is " << dt << ", but should be larger than zero.";
    }
  }
  

  return;
}
