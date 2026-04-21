#include "resistor_color.h"

namespace resistor_color {
std::vector<std::string> Color ={
"black","brown","red","orange","yellow","green","blue","violet","grey","white"
};
    

std::vector<std::string> colors(){
    return Color;
}
int color_code(std::string color){
 for(int i = 0; (size_t)i < Color.size(); i++)  {
     if(Color.at(i) == color){
         return i;
     }
 }
    return -1;
}
}  // namespace resistor_color
