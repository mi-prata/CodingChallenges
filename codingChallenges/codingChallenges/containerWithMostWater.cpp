//
//  containerWithMostWater.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/05/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//
#include "containerWithMostWater.hpp"


int maxArea(std::vector<int>& height) {
    //height to Indexes
    
    int finalResult(0);
    //two pointers
    const auto elements = height.size();
    int i = 0;
    int j = static_cast<int>(elements) - 1;
    while (i < elements and
           j > 0 and
           j > i)
    {
        const auto leftHeight = height[i];
        const auto rightHeight = height[j];
        const auto area = fmin(leftHeight, rightHeight) * abs(j - i);
        
        if (area > finalResult) finalResult = area;
        if (leftHeight < rightHeight) i++;
        else j--;
    }
    return finalResult;
}



