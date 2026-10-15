#include "prime_factors.h"
#include <vector>
namespace prime_factors {

    std::vector<long long> of(long long number_to_be_broken_down)
    {
        long long prime_counter = 2;
        std::vector<long long> vector_of_primes = {};
        while (number_to_be_broken_down > 1) {
            if(number_to_be_broken_down % prime_counter == 0)
            {
                number_to_be_broken_down /= prime_counter;
                vector_of_primes.push_back(prime_counter);
            } else {
                prime_counter ++;
            }
        }
        return vector_of_primes;
    }

}  // namespace prime_factors
