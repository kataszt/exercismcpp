#include "difference_of_squares.h"

namespace difference_of_squares 
{

    int square_of_sum(int number)
        {
            int result {};
            
            for (int i{1}; i<=number;i++)
                {
                   result += i;
                }
            int sq_of_sum_result = {result *result};
            return  sq_of_sum_result;
        }
    
    int sum_of_squares(int number)
        {
            
            int sum_of_square_result =0;
            for (int i{1}; i<=number;i++)
                {
                   sum_of_square_result += i*i;
                }
            return  sum_of_square_result;
        }
            
    int difference(int number)
        {
            return square_of_sum(number) - sum_of_squares(number);
        }
}  // namespace difference_of_squares
