//
//  twoSum.hpp
//  codingChallenges
//
//  Created by Miguel Prata on 25/08/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#ifndef twoSum_hpp
#define twoSum_hpp

#include "libraries.hpp"

#endif /* twoSum_hpp */

//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
std::vector<int> twoSum(std::vector<int>& nums, int target);

//The same implementation as above but uses an ordered map as container for the input.
//For this problem search is much faster in this container than in a vector, see the following link.
//https://stackoverflow.com/questions/454762/vector-or-map-which-one-to-use
std::vector<int> twoSumFast(std::vector<int>& nums, int target);
