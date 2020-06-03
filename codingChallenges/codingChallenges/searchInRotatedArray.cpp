//
//  searchInRotatedArray.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 03/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "searchInRotatedArray.hpp"

int searchRotatedArray(std::vector<int>& nums, int target) {
    int aResult(0);
    
    std::unordered_map<int,int> valuesToIndex;
    for (size_t i = 0; i < nums.size(); i++) valuesToIndex[nums[i]] = static_cast<int>(i);
    
    try
    {
        aResult = valuesToIndex.at(target);
    }
    catch(...)
    {
        return -1;
    }
    return aResult;
}
