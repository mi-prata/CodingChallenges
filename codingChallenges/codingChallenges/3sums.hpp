//
//  3sums.hpp
//  codingChallenges
//
//  Created by Miguel Prata on 25/08/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#ifndef _sums_hpp
#define _sums_hpp

#include "libraries.hpp"

#endif /* _sums_hpp */

// For an input array finds all unique triplets in the array such that a + b + c = 0
std::vector<std::vector <int>> threeSum(std::vector<int>& nums);

//For a pair a and b computes the element c, if exists in numsMap saves the triplet in uniqueSolutionsSet.
void findC (const int &a, const int &b,
            const std::unordered_map<int,int> &numsMap,
            const std::size_t &i,
            std::vector<std::vector <int>> &solutionSet);


