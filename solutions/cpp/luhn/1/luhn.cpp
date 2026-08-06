#include "luhn.h"
#include <string>
#include <cmath>
#include <cctype>
namespace luhn {

// TODO: add your solution here
    


    bool valid(std::string sin)
    {
        
        std::string cleaned; 
        for (char c : sin)
        {
            if(c == ' ')
            {
                continue;
            }
            if (!std::isdigit(c))
            {
                return false;
            }
            
            cleaned += c;
        }
        if (cleaned.length()<=1)
            {
                return false;
            }
        std::string changed_sin;
        
       for (int i{static_cast<int>(cleaned.length()) - 1}; i >= 0; i--) {
        int digit_value = cleaned[i] - '0';
        int distance_from_right = cleaned.length() - i - 1;
    
        if (distance_from_right % 2 != 0) {
            digit_value *= 2;
            if (digit_value > 9) {
                digit_value -= 9;
            }
        }
        changed_sin += std::to_string(digit_value);
        }
        
        int val = 0;
        for (size_t i{0}; i<changed_sin.length(); i++)
        {
            val += changed_sin[i]-'0';
        }
        if(val %10 == 0)
        {
            return true;
        }
        
        return false;        
    }
}
    
 // namespace luhn
