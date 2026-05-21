#include "binary.h"

namespace binary {

// TODO: add your solution here
    int convert(std::string input){
        int output = 0;
        for(auto i = input.rbegin(); i < input.rend(); i ++){
            if((*i != '0') && (*i != '1')){
                return 0;
            }
            int digit = (*i == '0') ? 0 : 1;
            int ah = i - input.rbegin();
            output += digit * std::pow(2,ah);
        }
        return output;
    }
}  // namespace binary
