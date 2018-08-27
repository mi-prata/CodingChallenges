//
//  3sums.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 25/08/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "3sums.hpp"

void findC (const int &a, const int &b,
             const std::unordered_map<int,int> &numsMap,
             const std::size_t &i,
             std::vector<std::vector <int>> &solutionSet)
{
    auto c = -b -a;
    //Check if element exists in the input using the map
    auto iter = numsMap.find(c);
    // If yes and b and c are not the same element 
    if (iter  != numsMap.end()
        && numsMap.find(c)->second != i)
    {
        std::vector<int> aSolution {a, b, c};
        std::sort(aSolution.begin(),aSolution.end());
        //Only insert the triple if it doesn't exist
        auto searchIter = std::find(solutionSet.begin(), solutionSet.end(), aSolution);
        if (searchIter == solutionSet.end()) solutionSet.push_back(aSolution);
    }
}

std::vector<std::vector <int>> threeSum(std::vector<int>& nums)
{
    if(nums.size() <= 2) return {};
    std::vector<std::vector <int>> solutionSet;
    
    for (std::size_t k = 0; k < nums.size(); ++k)
    {
        //Choose an element of the input vector
        auto a = nums[k];
        
        //Create map of all elements EXCEPT a
        std::unordered_map<int,int> numsMap;
        for (std::size_t i = 0; i < nums.size(); ++i)
        {
         if (i != k) numsMap.insert (std::pair<int,int>(nums[i],(int) i));
        }
        //Loop all vector elements before a
        if (k > 0)
        {
            for (std::size_t i = 1; i < k; ++i)
            {
                auto b = nums[i];
                findC (a,b, numsMap, i,solutionSet);
            }
        }
        //Loop all vector elements after a
        if (k + 1 < nums.size())
        {
            for (std::size_t i = k+1; i < nums.size(); ++i)
            {
                auto b = nums[i];
                findC (a,b, numsMap, i,solutionSet);
            }
        }
    }
    return solutionSet;
}
