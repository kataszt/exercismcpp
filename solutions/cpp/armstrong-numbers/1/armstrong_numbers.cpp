#include "armstrong_numbers.h"
#include <cmath>
namespace armstrong_numbers {

// TODO: add your solution here
bool is_armstrong_number(int number)
    {
        int count = 0;
        int temp=number;
        if (temp == 0)
        {
            count=1;
            
        }else
        {
            while(temp > 0)
            {
                temp /=10;
                count++;
            }
        }
        int original = number;
        int armstrong_check= 0;
        for (int i{0}; i<count;i++)
        {
            int curr_digit= number%10;
            armstrong_check+= std::pow(curr_digit,count);
            number/=10;
        }
        
    return armstrong_check==original;
    }
}  // namespace armstrong_numbers
