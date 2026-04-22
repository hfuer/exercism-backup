#pragma once
#include<string>
#include<unordered_set>
#include<map>
namespace allergies {
class allergy_test{
    public:
    int num = 0;
    std::map<std::string, unsigned int> allergiesA = {
    {"eggs",1},
    {"peanuts",2},
    {"shellfish",4},
    {"strawberries",8},
    {"tomatoes",16},
    {"chocolate",32},
    {"pollen",64},
    {"cats",128}
    };
    std::map<unsigned int,std::string> allergiesB= {
    {1,"eggs"},
    {2,"peanuts"},
    {4,"shellfish"},
    {8,"strawberries"},
    {16,"tomatoes"},
    {32,"chocolate"},
    {64,"pollen"},
    {128,"cats"}
    };
    
  allergy_test(int input){
      num = input;
  }
    bool is_allergic_to(std::string input){
       unsigned int temp = allergiesA.at(input);
        return temp & num;
    }
    std::unordered_set<std::string> get_allergies(){
        std::unordered_set<std::string> output = {};
        for(int i = 1; !(i > 128); i *= 2){
            if(i & num){
              output.emplace(allergiesB.at(i));
            }
        }
        return output;
    }
 };
     
}
// TODO: add your solution here

  // namespace allergies
