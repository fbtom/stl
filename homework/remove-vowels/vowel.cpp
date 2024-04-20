#include "vowel.hpp"
#include <algorithm>
#include <vector>

void removeVowels(std::string& string) {
    std::vector<char> vowels{'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};
    for (const auto& vowel : vowels) {
        string.erase(std::remove(string.begin(), string.end(), vowel), string.end());
    }
}

void removeVowels(std::vector<std::string>& vector) {
    for (auto& string : vector) {
        removeVowels(string);
    }
}
