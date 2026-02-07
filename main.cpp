#include <iostream>
#include "src/State.hpp"
#include "src/Integrator.hpp"
#include "src/IntegratorEuler.hpp"

int main() {
  State s1(1, 2, 3, 4);
  s1.print();
  std::cout << "The State currently looks like this: " << s1 << std::endl;
  return 0;
}
