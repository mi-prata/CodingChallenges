//
//  sortCharactersByFrequency.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 01/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "sortCharactersByFrequency.hpp"

std::string returnSortedStringDecreasingFrequency(std::string s) {
    
    std::unordered_map<char, int> aCharCountMap;
    std::vector<std::pair<int, char>> aCountToChars;
    std::string sortedString;
    
    for(const auto &aChar : s)
    {
        aCharCountMap[aChar]++;
    }
    
    for (const auto &[aChar, aCount] : aCharCountMap)
    {
        aCountToChars.push_back(std::make_pair(aCount,aChar));
    }
    
    std::sort(aCountToChars.begin(),aCountToChars.end());
    std::reverse(aCountToChars.begin(),aCountToChars.end());
    
    for (const auto &aPair : aCountToChars)
    {
        for (int i = 0; i < aPair.first; i++) sortedString += aPair.second;
    }
    
    return sortedString;
}
