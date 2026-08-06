#include "reverse_string.h"
#include <string>
#include <cctype>
namespace reverse_string {

// TODO: add your solution here
std::string reverse_string(std::string word){
    int length_of_word = word.size();
    std::string reversed = "";
    for (int i{length_of_word-1} ; i>=0 ; i--)
    {
        reversed += word[i];
    }
    return reversed;
}
}  // namespace reverse_string
