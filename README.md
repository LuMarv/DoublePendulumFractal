# DoublePendulumFractal
A small c++ project for visualization of the double pendulum chaos fractal.

This is a short test!!!

# Build the project the following way:
* check if cmake and gnu compiler are installed (other compilers work as well)
* pull repo to local machine
* navigate to the top level of code base (folder that contains main.cpp)
* type the following commands into your unix shell

mkdir build && cd build</br>
cmake ..</br>
make</br>
./simulation</br>

* profit 

# workflow when merging with main
* rebase own branch on main
* only merge with main when project compiles
* use main.cpp only for calling (developer-)test functions, which are placed in other files (for easier merging) -> until test frame work is integrated
