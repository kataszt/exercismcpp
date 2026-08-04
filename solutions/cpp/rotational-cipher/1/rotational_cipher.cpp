#include "rotational_cipher.h"
#include <string>


namespace rotational_cipher {

// TODO: add your solution here

std::string rotate(std::string code, int key) {
    std::string letters = "";
    int length_of_code = code.size();
    
    for (int i{0}; i < length_of_code; i++) {
        char c = code[i];
        if (std::isalpha(c)) 
        {
            bool was_upper = std::isupper(c);
            char lower_c = std::tolower(c);
            int position = lower_c - 'a';
            int shifted_position = (position + key) % 26;
            char rotated = 'a' + shifted_position;
            if (was_upper)
            {
                rotated = std::toupper(rotated);
            }
            letters += rotated;
        } 
        else 
        {
            letters += c;
        }
    }
    
    return letters;   // now outside the loop — runs once, after all characters are processed
}    
}

  // namespace rotational_cipher
