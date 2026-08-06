#include "bob.h"
#include <string>
#include <cctype>
namespace bob 
{

// TODO: add your solution here
    bool is_yelling(std::string sentence)
    {
        bool has_letter=false;
        for(size_t i{0}; i< sentence.length();i++)
        {
            char c = sentence[i];
            if(std::islower(c))
            {
                return false;
            }
            if (std::isupper(c))
            {
                has_letter = true;
            }
        }
        return has_letter;   
    }
    bool is_question(std::string sentence)
    {

        for (int i = sentence.length()-1; i>= 0; i--)
        {
            char c = sentence[i];
            if (std::isspace(c))
            {
                continue;
            }
            return c=='?';
        }
        return false;
    }
    bool is_silence(std::string sentence)
    {

       
        for (size_t i{0}; i < sentence.length(); i++) 
        {
            char c = sentence[i];
            if (!std::isspace(c)) 
            {
            return false;   
            }
        }
        return true;  
    
    }   
    std::string hey(std::string sentence)
    {
        bool yelling = is_yelling(sentence);
        bool question = is_question(sentence);
        if (sentence.empty() ||is_silence(sentence))
        {
            return "Fine. Be that way!";
        }else if (yelling && question)
        {
            return "Calm down, I know what I'm doing!";
        }else if (yelling)
        {
            return "Whoa, chill out!"; 
        }else if (question)
        {
            return "Sure.";
        }else 
        {
            return "Whatever.";
        }
    }
}  // namespace bob
            
        
