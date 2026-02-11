#ifndef STATE
#define STATE

#include <iostream>
#include <array>

class State {
private:
  // contains theta1, theta2, omega1, omega2 in that order
  std::array<double, 4> _vals;
public:
  // constructors
  State() { for (int i = 0; i < 4; i++) { _vals[i] = 0; } }
  constexpr explicit State(const std::array<double, 4>& vals) : _vals(vals) {}
  constexpr explicit State(double theta1, double theta2, double omega1, double omega2)
                            : _vals{theta1, theta2, omega1, omega2} {}

  // getters
  double theta1() const { return _vals[0]; }
  double theta2() const { return _vals[1]; }
  double omega1() const { return _vals[2]; }
  double omega2() const { return _vals[3]; }

  // operators
  State& operator+=(const State& other);
  State& operator*=(const double other);
        double& operator[](size_t i)       { return _vals[i]; }
  const double& operator[](size_t i) const { return _vals[i]; }

  void print() const;

  // friend functions
  friend std::ostream& operator<<(std::ostream& os, State& s);
};

// non member functions (in header because inlined!!!)
inline State operator+(const State& s1, const State& s2) {
  State res(s1);
  res += s2;
  return res;
}

// both directions of the scalar multiplication are overloaded :)
// direction 1
inline State operator*(const State& s, const double d) {
  State res(s);
  res *= d;
  return res;
}

// direction 2 (note the argument order)
inline State operator*(const double d, const State& s) {
  State res(s);
  res *= d;
  return res;
}


#endif // STATE
