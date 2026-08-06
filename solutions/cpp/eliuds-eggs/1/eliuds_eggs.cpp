#include "eliuds_eggs.h"

namespace chicken_coop {

// TODO: add your solution here
int positions_to_quantity(int position)
    {
        int pickup= 0;
        int temp = position;
        while (temp>0)
        {
            if(temp%2 != 0)
            {
                pickup++;
            }
            temp/=2;
        }
        return pickup;
    }
}  // namespace chicken_coop
