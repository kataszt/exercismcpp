#pragma once
#include <vector>
#include <string>
namespace lasagna_master {
int preparationTime(const std::vector<std::string>& layers, int time=2);
struct amount {
    int noodles;
    double sauce;
};
amount quantities(const std::vector<std::string>& layers);
void addSecretIngredient(std::vector<std::string>& layers,const std::vector<std::string>& friends_layers);
std::vector<double> scaleRecipe(const std::vector<double>&quantities,int portions);
void addSecretIngredient(std::vector<std::string>& layers, std::string secretIngredient);
}  // namespace lasagna_master
