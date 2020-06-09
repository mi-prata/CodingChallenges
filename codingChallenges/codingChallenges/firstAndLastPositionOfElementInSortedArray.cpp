//
//  firstAndLastPositionOfElementInSortedArray.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 09/06/2020.
//  Copyright © 2019 mjsp. All rights reserved.
//

#include "firstAndLastPositionOfElementInSortedArray.hpp"

//Due to the time complexity constraint, Olog(o),
//executing the standard library find algorithm from the two ends of the vector
//would not suffice.
//It's however possible to execute it a single time.

std::vector<int> searchRange(std::vector<int>& nums, int target) {
        
    std::vector<int> indexes;
        
        const auto targetIter = find(nums.begin(), nums.end(), target);
        
        if(targetIter == nums.end())
        {
            return {-1,-1};
        }
        else
        {
            const auto targetIndex = targetIter - nums.begin();
            
            for (size_t i = targetIndex; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    if (indexes.empty() ||
                        indexes.size() == 1)
                    {
                        indexes.push_back(static_cast<int>(i));
                    }
                    else indexes.back() = static_cast<int>(i);
                }
                else break;
            }
        }
        if(indexes.size() == 1)
        {
            indexes.push_back(indexes.front());
        }

        return indexes;
};
