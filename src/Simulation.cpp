#include "../include/Simulation.hpp"

void simulate(int integrator_index) {

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

            switch(integrator_index){
                case 0:
                    I = new IntegratorEuler();
                    break;
                case 1:
                    //I = new IntegratorRK45();
                    break;
                default:
                    I = new IntegratorEuler();
            }

            Pendulum p(std::move(I)); // rule of five
            p.run(); // has to be implemented
        }
    }

}