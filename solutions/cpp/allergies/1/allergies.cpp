#include "allergies.h"
#include <map>
#include <string>
#include <unordered_set>

namespace allergies {

static const std::map<std::string, unsigned int> map_of_allergies = {
    {"eggs", 1},      {"peanuts", 2},    {"shellfish", 4}, {"strawberries", 8},
    {"tomatoes", 16}, {"chocolate", 32}, {"pollen", 64},   {"cats", 128}};

allergy_test::allergy_test(unsigned int allergy_score) {
    score_of_allergy = allergy_score;
}

bool allergy_test::is_allergic_to(const std::string& allergen) const {
    auto it = map_of_allergies.find(allergen);
    if (it == map_of_allergies.end()) {
        return false;
    }
    return (score_of_allergy & it->second) != 0;
}

std::unordered_set<std::string> allergy_test::get_allergies() const {
    std::unordered_set<std::string> unorderedAllergies;
    for (const auto& entry : map_of_allergies) {
        if ((score_of_allergy & entry.second) != 0) {
            unorderedAllergies.emplace(entry.first);
        }
    }
    return unorderedAllergies;
}

}  // namespace allergies