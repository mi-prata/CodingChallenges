//
//  firstUniqueCharacterInString.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 01/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "firstUniqueCharacterInString.hpp"

int retrieveIndexOfFirstUniqueChar(std::string s) {
    
    int firstUniqueCharIndex(-1);
    std::unordered_map<char, int> aCharCountMap;
    //map with occurence count of each character
    for(const auto &aChar : s)
    {
        aCharCountMap[aChar]++;
    }
    
    for(const auto &[aCharacter, aCount] : aCharCountMap)
    {
        //if character is unique
        if(aCount == 1)
        {
            //save its index if there is no index saved or if it's smaller than the currently stored index
            const auto aUniqueCharIndex = s.find(aCharacter);
            if (firstUniqueCharIndex == -1 or
                aUniqueCharIndex < firstUniqueCharIndex
               )
            {
                firstUniqueCharIndex = static_cast<int>(aUniqueCharIndex);
            }
        }
    }
    
    return firstUniqueCharIndex;
}
