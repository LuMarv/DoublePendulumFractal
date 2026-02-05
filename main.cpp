#include <iostream>
#include "src/State.hpp"
#include "src/Integrator.hpp"
#include "src/IntegratorEuler.hpp"

int main() {
  std::cout << "Hello this is the first test (for CMakeLists.txt)" << '\n';
  State s1(1, 0, 0, 0);
  s1.print();
  State s2(1, 2, 3, 4);
  s2.print();
  (s2 += s2).print();
  // new tests
  State s3 = s2 + s1;
  s3.print();
  return 0;
}
