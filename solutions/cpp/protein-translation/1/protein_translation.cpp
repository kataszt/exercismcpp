#include "protein_translation.h"
#include <vector>
#include <string>
#include <map>
namespace protein_translation 
{
// TODO: add your solution here
    std::map<std::string, std::string> amino_acid_map =
    {
    {"AUG","Methionine"},
    {"UUU","Phenylalanine"},
    {"UUC","Phenylalanine"},
    {"UUA","Leucine"},
    {"UUG","Leucine"},
    {"UCU","Serine"},
    {"UCC","Serine"},
    {"UCA","Serine"},
    {"UCG","Serine"},
    {"UAU","Tyrosine"},
    {"UAC","Tyrosine"},
    {"UGU","Cysteine"},
    {"UGC","Cysteine"},
    {"UGG","Tryptophan"},
    {"UAA","STOP"},
    {"UAG","STOP"},
    {"UGA","STOP"},
    };
    std::vector<std::string> proteins(std::string strand) {
        std::vector<std::string> result ;
        for(size_t i{0}; i<strand.length(); i+=3 ){
            std::string strand_piece = strand.substr(i,3);
            auto it = amino_acid_map.find(strand_piece);
        
            if(it!=amino_acid_map.end()){
                if (it->second == "STOP"){
                    break;
                } else {
                    result.push_back(it->second);
                }
            }
        }
        return result;
                
    }
};  // namespace protein_translation
