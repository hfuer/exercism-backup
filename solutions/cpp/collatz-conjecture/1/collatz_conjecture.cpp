#include "collatz_conjecture.h"

namespace collatz_conjecture {

// TODO: add your solution here
    int steps(int input){
        if(input < 1){ throw std::domain_error("you stupid");}
        int times  = 0;
        while(input != 1){
            input = ((input % 2) == 0) ? input / 2 : (3 * input) + 1;
            times++;
        }
        return times;
    }
}  // namespace collatz_conjecture
