#include "hexadecimal.h"
#include <string>
#include <map>
namespace hexadecimal {

// TODO: add your solution here
int convert(const std::string& hexnumber)
    {
        static const std::map<char, int> hexamap = {
            {'0', 0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},
            {'6',6},{'7',7},{'8',8},{'9',9},{'a',10},{'b',11},
            {'c',12},{'d',13},{'e',14},{'f',15}};
        
        int result = 0;
        for (char character: hexnumber)
        {
            auto it = hexamap.find(character);
            if (it == hexamap.end()){
                return 0;
            }
            int converted_nr= it->second;
            result = result * 16 + converted_nr ;
        }
        return result;
    }
}  // namespace hexadecimal
