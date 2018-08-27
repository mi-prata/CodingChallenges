//
//  twoSum.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 25/08/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "twoSum.hpp"

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> ret;
    
    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        auto numberToFind = target - nums.at(i);
        auto iter  = std::find(nums.begin(),nums.end(),numberToFind);
        auto index = std::distance(nums.begin(), iter);
        
        //Do not use the same element twice:
        //The index of the iterator must be different than the current index.
        if (index != i &&
            iter != nums.end())
        {
            ret = {(int) i, (int) index};
            return ret;
        }
        
    }
    return ret;
}

std::vector<int> twoSumFast(std::vector<int>& nums, int target)
{
    std::vector<int> ret;
    
    //Create map of the input values to their indexes
    std::unordered_map<int,int> numsMap;
    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        numsMap.insert (std::pair<int,int>(nums[i],(int) i));
    }
    
    //Loop all vector elements
    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        //Compute number to find for every element
        auto numberToFind = target - nums[i];
        //Check if element exists in the input using the map
        auto iter = numsMap.find(numberToFind);
        // If yes, and it's not the same element
        if (iter  != numsMap.end() &&
            numsMap.find(numberToFind)->second != i)
        {
            //This variable can only be defined if the number exists.
            auto index = numsMap.find(numberToFind)->second;
            ret = {(int) i , index};
            return ret;
        }
        
    }
    
    return ret;
}
