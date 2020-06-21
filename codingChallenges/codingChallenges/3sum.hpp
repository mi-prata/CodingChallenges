//
//  3sum.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 21/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#pragma once
#include "libraries.hpp"

//Implementation without two pointer technic. Not performant enough to clear all leetcode cases, failing in 311/313.
std::vector<std::vector<int>> threeSum(std::vector<int>& nums);

//Uses the two pointer technic to find the solution with O^2 time complexity.
std::vector<std::vector<int>> threeSumFast(std::vector<int>& nums);
