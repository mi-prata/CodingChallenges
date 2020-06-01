//
//  kThLargestElement.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 01/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "kThLargestElement.hpp"


int findKthLargest(std::vector<int>& nums, int k)
{
    std::sort(nums.begin(), nums.end());
    
    return nums[nums.size() - k];
}
