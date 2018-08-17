//
//  find_max_consecutive_ones.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "find_max_consecutive_ones.hpp"


int findMaxConsecutiveOnes(std::vector<int>& nums)
{
    int counter = 0;
    std::vector<int> sequenceOfOnes;
    
    for (std::vector<int>::iterator it = nums.begin() ; it != nums.end(); ++it)
    {
        if(*it == 1) ++ counter;
        
        if(*it == 0 || it == nums.end() - 1)
        {
            sequenceOfOnes.push_back(counter);
            counter = 0;
        }
    }
    auto maxConsecutiveOnes  = *max_element(sequenceOfOnes.begin(), sequenceOfOnes.end());
    return maxConsecutiveOnes;
}
