#include "atbash_cipher.h"
#include <string>
#include <cctype>
namespace atbash_cipher {

std::string encode(std::string code) {
    std::string letters = "";
    int length_of_code = code.size();
    for (int i{0}; i < length_of_code; i++) {
        char c = std::tolower(code[i]);
        if (std::isalpha(c)) {
            int position = c - 'a';
            char mirrored = 'a' + (25 - position);
            letters += mirrored;
        } else if (std::isdigit(c)) {
            letters += c;
        }
    }

    std::string result = "";
    for (size_t i{0}; i < letters.size(); i++) {
        result += letters[i];
        if ((i + 1) % 5 == 0 && i + 1 != letters.size()) {
            result += " ";
        }
    }
    return result;
}

std::string decode(std::string code) {
    std::string letters = "";
    int length_of_code = code.size();
    for (int i{0}; i < length_of_code; i++) {
        char c = std::tolower(code[i]);
        if (std::isalpha(c)) {
            int position = c - 'a';
            char mirrored = 'a' + (25 - position);
            letters += mirrored;
        } else if (std::isdigit(c)) {
            letters += c;
        }
    }
    return letters;  // no chunking — return as-is
}

}  // namespace atbash_cipher