#include "darts.h"
#include <cmath>
namespace darts{
    float inner_ring = 1.0f;
    float middle_ring = 5.0f;
    float outer_ring = 10.0f;
    int score (const float x_pos, const float y_pos){
        float distance = std::sqrt(x_pos*x_pos + y_pos*y_pos);
        if (distance <= inner_ring){
            return 10;
        } else if (distance <= middle_ring){
            return 5;
        } else if (distance <= outer_ring){
            return 1;
        }
        return 0;   
    }
}  // namespace darts
    

