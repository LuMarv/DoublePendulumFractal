#include <iostream>
#include "include/State.hpp"
#include "include/Integrator.hpp"
#include "include/IntegratorEuler.hpp"
#include "include/RHS.hpp"

int main() {
  State s1(1, 2, 3, 4);
  s1.print();
  std::cout << "The State currently looks like this: " << s1 << std::endl;
  State s3;
  s3.print();
  for (size_t i = 0; i < 4; i++) {
    std::cout << s1[i] << '\n';
  }
  s1[1] = 15;

  for (size_t i = 0; i < 4; i++) {
    std::cout << s1[i] << '\n';
  }
  return 0;
}
