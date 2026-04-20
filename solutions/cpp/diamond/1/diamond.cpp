#include "diamond.h"

namespace diamond {

// TODO: add your solution here
    std::vector<std::string> rows(char input){
        std::vector<std::string> output = {};
        char letters[26];
        for(char i = 'A'; !(i > 'Z') ; i++){//im being lazy so i dont have to write out all the letters of the alphabet 
            letters[i - 'A'] = i;//this iswhy i dont use c arrays tehty are unsafe
        }

        int num = input - 'A';//num of letter

        
        //start of loop
        for(int i = 0; !(i > num); i++){
            std::string temp = "";
            
            for(int j = 0; j < (num - i); j++){//leading spaces
            temp += " ";
            }
            
            temp += letters[i];//letter
            
            for(int j = 0; j < 2* i -1; j++){//middle spaces
                temp += " ";
            }
            
            if(i != 0){
                temp += letters[i];
            }//second letter only if not 
            
            for(int j = 0; j < num - i; j++){//trailing spaces
                temp += " ";
            }
            
            output.push_back(temp);
        }
                //start of loop
        for(int i = num -1 ; i >= 0; i--){
            std::string temp = "";
            
            for(int j = 0; j < (num - i); j++){//leading spaces
            temp += " ";
            }
            
            temp += letters[i];//letter
            
            for(int j = 0; j < 2* i -1; j++){//middle spaces
                temp += " ";
            }
            
            if(i != 0){
                temp += letters[i];
            }//second letter only if not 
            
            for(int j = 0; j < num - i; j++){//trailing spaces
                temp += " ";
            }
            
            output.push_back(temp);
        }
        return output;
    }
}  // namespace diamond
