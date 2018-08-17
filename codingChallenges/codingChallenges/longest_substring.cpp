//
//  longest_substring.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "longest_substring.hpp"

int longest_Substring(const std::string &s)
{
    std::string buffer, charHolder;
    std::vector<std::string> substrings;
    
    std::size_t i = 0,
    length = 0,
    reset = 0;
    
    while (i != s.size())
    {
        charHolder = s[i];
        //If a character is not found in buffer
        if (buffer.find(charHolder) == std::string::npos)
        {
            //Saves it and increments index.
            buffer.append(charHolder);
            ++i;
        }
        //If the character is present in the buffer
        else{
            ++reset;
            //Save current substring
            substrings.push_back(buffer);
            //Erase characters from buffer
            buffer.erase(buffer.begin(),buffer.end());
            //Reset i
            i = reset;
        }
        //in case it's the last character of the string
        if (i == s.size()) substrings.push_back(buffer);
    }
    //Outputs all substrings and registers the size of the longest one.
    std::cout << "The string is: " << s << std::endl;
    std::cout << "The substrings are: ";
    for (std::size_t i = 0; i < substrings.size(); ++i) {
        std::cout << substrings[i] << " ";
        if (substrings[i].size() > length) length = substrings[i].size();
    }
    return int (length);
    
}
