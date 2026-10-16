#include "kindergarten_garden.h"

#include <array> 
#include <string> 
namespace kindergarten_garden {

    static const std::array<std::string, 12> name_of_children = {"Alice","Bob","Charlie","David","Eve","Fred","Ginny","Harriet","Ileana","Joseph","Kincaid","Larry"};
    
    static Plants plants_helper(char letter)
    {
        if (letter == 'G'){
            return Plants::grass;
        } else if(letter =='C') {
            return Plants::clover;
        } else if(letter=='R'){
            return Plants::radishes;
        } else {
            return Plants::violets;
        }
    }
    
    std::array<Plants, 4> plants(const std::string& rows, const std::string& name)
    {
        std::size_t childs_position = 0;
        for(std::size_t i = 0; i<name_of_children.size();i++)
        {
            if (name_of_children[i] == name)
            {
                childs_position = i;
                break;
            }
        }
        std::size_t row_line_break_pos = rows.find('\n');
        std::string row1= rows.substr(0, row_line_break_pos);
        std::string row2= rows.substr(row_line_break_pos+1);
        
        return std::array<Plants, 4> {plants_helper(row1[childs_position*2]),plants_helper(row1[childs_position*2+1]),plants_helper(row2[childs_position*2]), plants_helper(row2[childs_position*2+1])};
    }


}  // namespace kindergarten_garden
