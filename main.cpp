#include <iostream>
#include <string>
#include "include/State.hpp"
#include "include/Integrator.hpp"
#include "include/IntegratorEuler.hpp"
#include "include/RHS.hpp"

int main(int argc, char** argv) {

  // arguments decide on:
  // integrator type
  // integration time [s]
  // integration steps (or a measure therefore with adaptive step width)

  std::string integrator_method = argv[1];
  int integrator_index = 0;

  switch(integrator_method) {
    case "Euler" or "euler":
    integrator_index = 0;
    break;
    default:
    integrator_index = 0;
    break;
  }
  // include other two arguments and give to simulation()




  // minimal example

  // State s1(1, 2, 3, 4);
  // s1.print();
  // std::cout << "The State currently looks like this: " << s1 << std::endl;
  // State s3;
  // s3.print();
  // for (size_t i = 0; i < 4; i++) {
  //   std::cout << s1[i] << '\n';
  // }
  // s1[1] = 15;

  // for (size_t i = 0; i < 4; i++) {
  //   std::cout << s1[i] << '\n';
  // }

  return 0;
}
