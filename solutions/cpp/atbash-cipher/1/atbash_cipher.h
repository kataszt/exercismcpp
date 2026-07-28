#pragma once
#include <string>
#include <cctype>

namespace atbash_cipher {

std::string encode(std::string code);
std::string decode(std::string code);
}  // namespace atbash_cipher
