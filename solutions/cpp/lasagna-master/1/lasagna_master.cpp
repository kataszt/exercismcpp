#include "lasagna_master.h"
#include <vector>
#include <string>
namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(const std::vector<std::string>& layers, int time)
    {
        int elements_nr = layers.size();
        int estimated_prep_time = 0;
        if (time > 2)
        {
            estimated_prep_time = time * elements_nr;
            return estimated_prep_time;
        }
        estimated_prep_time = time * elements_nr;
        return estimated_prep_time;
        
    }
    amount quantities(const std::vector<std::string>& layers)
    {
        int cnt_of_sauce = 0;
        int cnt_of_noodles = 0;
        int required_noodles = 0;
        double required_sauce = 0;
        
        int noodle_weight = 50;
        double sauce_litre = 0.2;
        
        for(std::string ingredient: layers)
        {
            if (ingredient == "sauce")
            {
                cnt_of_sauce ++;
            } else if (ingredient == "noodles") 
            {
                cnt_of_noodles++;   
            } else
            {
                continue;
            }
        }
        required_noodles = cnt_of_noodles * noodle_weight;
        required_sauce = sauce_litre * cnt_of_sauce;
        
        return amount {required_noodles, required_sauce};
        
    }
    void addSecretIngredient(std::vector<std::string>& layers, const std::vector<std::string>& friends_layers)
    {
        layers.back() = friends_layers.back();
    }
    std::vector<double> scaleRecipe(const std::vector<double>&quantities,int portions)
    {
        std::vector<double> scaled_recipe;
        scaled_recipe.reserve(quantities.size());
        
        double real_multiplier = portions / 2.0;
        for (double quantity :quantities)
        {
            quantity *=real_multiplier;
            scaled_recipe.push_back(quantity);
        }
        return scaled_recipe;
    }    
    void addSecretIngredient(std::vector<std::string>& layers,const std::string secretIngredient)
    {
        layers.back()=secretIngredient;
    }
}  // namespace lasagna_master
