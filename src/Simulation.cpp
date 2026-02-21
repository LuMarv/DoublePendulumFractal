#include "IntegratorEuler.hpp"
#include <vector>

void simulate() {

    int size1 = 1;
    int size2 = 1;
    int size3 = 2000; // #integration steps
    int size4 = 5; // integration time

    std::vector<std::vector<std::vector<State>>> t(
        size1, std::vector<std::vector<State>>(
        size2, std::vector<State>(
        size3)));

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            
            // how to decide on integrator type? 
            // -> if statements are no bottleneck whatsoever here
            Integrator* I;
            if(...){
                I = new IntegratorEuler();
            } else if(...){
                I = new IntegratorRK45();
            }
            // and so on (jan)

            Pendulum p(std::move(I)); // rule of three
            p.run(); // has to be implemented
        }
    }

}