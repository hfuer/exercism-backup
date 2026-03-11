#include "nucleotide_count.h"

namespace nucleotide_count {
// TODO: add your solution here
std::map<char, int> count(std::string input) {
    std::map<char,int> output = {};

    output.emplace(std::pair('A', std::count(input.begin(),input.end(),'A')));
    output.emplace(std::pair('C', std::count(input.begin(),input.end(),'C')));
    output.emplace(std::pair('G', std::count(input.begin(),input.end(),'G')));
    output.emplace(std::pair('T', std::count(input.begin(),input.end(),'T')));
    
    if(input.size() != static_cast<size_t>(output.at('A') + output.at('C')+output.at('G')+output.at('T'))){
        throw std::invalid_argument("ghj");
    }
    return output;
 } 
}  // namespace nucleotide_count
