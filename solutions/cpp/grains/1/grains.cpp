#include "grains.h"

namespace grains {

// TODO: add your solution here
    unsigned long long  square(int squares)
    {
        squares -=1; //for the bitshifting
        return 1ULL << squares;
    }
    unsigned long long total()
    {
        unsigned long long sum = 0;
        for(int i = 1; i<=64; i++)
            {
                sum += square(i);
            }
        return sum;
    }
}  // namespace grains
