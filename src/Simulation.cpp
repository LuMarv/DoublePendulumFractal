#include "../include/Simulation.hpp"

void simulate(const int integrator_index, const double time_end, const double step_size) {

  int size1 = 1; // pixels x
  int size2 = 1; // pixels y
  int size3 = 2000; // #integration steps
  int size4 = time_end; // integration time

  // 3D tensor of shape (size1, size2, size3)
  std::vector<std::vector<std::vector<State>>> t(
    size1, std::vector<std::vector<State>>(
    size2, std::vector<State>(
    size3)));

  for(int i = 0; i < size1; i++) {
    for(int j = 0; j < size2; j++) {
            
      // how to decide on integrator type? 
      // -> if statements are no bottleneck whatsoever here
      std::unique_ptr<Integrator> I;

      switch(integrator_index){
        case 0:
          I = std::make_unique<IntegratorEuler>();
          break;
        case 1:
          //I = std::make_unique<IntegratorRK4>();
          break;
        default:
          I = std::make_unique<IntegratorEuler>();
      }

      // please use different constructor when running an actual simulation later
      // correct constrcutor is indicated in Pendulum.hpp
      Pendulum p(t[i][j], std::move(I)); // rule of five
      p.run(); // has to be implemented
    }
  }
}