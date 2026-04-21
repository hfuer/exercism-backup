#include "sum_of_multiples.h"

namespace sum_of_multiples {

// TODO: add your solution here
    int to(std::vector<int> items, int level){
        std::vector<int> multiples ={};
        if(level == 0){
            return 0;
        }
        for(int i: items){
            for(int j = i; j < level;){
                multiples.push_back(j);
                j += i;
            }
        }
        for(int i = 0; (size_t)i < multiples.size(); i++){
            for(auto j = multiples.begin() + i + 1; j < multiples.end();j++) {
                    multiples.erase(std::remove(j, multiples.end(), multiples.at(i)), multiples.end());
            }
        }
        int res = 0;
        for(int i : multiples){
            res += i;
        }
        return res;
    }

}  // namespace sum_of_multiples
