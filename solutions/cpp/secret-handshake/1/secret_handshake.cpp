#include "secret_handshake.h"

namespace secret_handshake {

// TODO: add your solution here
    std::vector<std::string> commands(int input){
    std::vector<std::string> output = {};
        if(input & 1){
            output.push_back("wink");
        }
        if(input & 2){
            output.push_back("double blink");
        }
        if(input & 4){
            output.push_back("close your eyes");
        }
        if(input & 8){
            output.push_back("jump");
        }
        if(input & 16){
            return{output.rbegin(),output.rend()};
        }
        return output;
        
        
        
        
    }
}  // namespace secret_handshake
