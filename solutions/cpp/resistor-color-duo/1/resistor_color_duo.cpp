#include "resistor_color_duo.h"

namespace resistor_color_duo {
std::map<std::string,int> table = {
    {"black", 0},
    {"brown", 1},
    {"red", 2},
    {"orange", 3},
    {"yellow", 4},
    {"green", 5},
    {"blue", 6},
    {"violet", 7},
    {"grey", 8},
    {"white", 9}
}; 
// TODO: add your solution here
    int value(std::vector<std::string> input){
        return (table.at(input.at(0)) * 10) + table.at(input.at(1));
    }
}  // namespace resistor_color_duo
