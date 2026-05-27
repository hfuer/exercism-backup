#include "atbash_cipher.h"
namespace atbash_cipher{
std::map<char,char> lut = {
    {'a','z'},
    {'b','y'},
    {'c','x'},
    {'d','w'},
    {'e','v'},
    {'f','u'},
    {'g','t'},
    {'h','s'},
    {'i','r'},
    {'j','q'},
    {'k','p'},
    {'l','o'},
    {'m','n'},
    {'n','m'}, 
    {'o','l'},
    {'p','k'},
    {'q','j'},
    {'r','i'},
    {'s','h'},
    {'t','g'},
    {'u','f'},
    {'v','e'},
    {'w','d'},
    {'x','c'},
    {'y','b'},
    {'z','a'}
    };

    std::string encode(std::string input){
        std::string out = {};
        int x = 0;
        for(auto i = input.begin(); i < input.end(); i++){
            *i = (char)std::tolower(*i);
            if(isdigit(*i)){//num
                out += *i;
            }
            else if(*i == ' ' || !isalnum(*i)){//not inclyded
                continue;
            }
            else{
            out += lut.at(*i);
            }
                        //spaces
            if((std::floor((x+1)/5) - std::floor(x/5))){
                out += ' ';
            }
            x++;
        }
        //remove traling space
        if(out.at(out.size() - 1) == ' '){
            out.erase(out.size() - 1,  1);
        }
        return out;
    }
    
    std::string decode(std::string input){
        std::string out = {};
        for(auto i = input.begin(); i < input.end(); i++){ 
            *i = (char)std::tolower(*i);
            if(isdigit(*i)){
                out += *i;
                continue;
            }
            else if(*i == ' '){
                continue;
            }
            
            out += lut.at(*i); 

        }
        return out;
    }
}
    
 