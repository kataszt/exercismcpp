#include "trinary.h"
#include <cmath>
#include <string>
namespace trinary {

// TODO: add your solution here
//  # "102012"
//  1       0       2       0       1       2    # the number
// 1*3^5 + 0*3^4 + 2*3^3 + 0*3^2 + 1*3^1 + 2*3^0    # the value
//  243 +     0 +    54 +     0 +     3 +     2 =  302


int to_decimal(std::string trinary)
    {
        char c;
        int value = 0;
        for (int i{static_cast<int>(trinary.length())-1}; i>=0; i--)
        {
            c=trinary[i];
            int c_to_integer = c- '0';
            if(!isdigit(c) || c_to_integer>2)
            {
                return 0;    
            }
            value += c_to_integer * std::pow(3,static_cast<int>(trinary.length())-i-1);
        
        }
        return value;
    }
}  // namespace trinary
