//
// maxProductOfTwoElementsInArray.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 04/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "maxProductOfTwoElementsInArray.hpp"

int returnMaxProduct(std::vector<int>& nums) {
    
    const auto it = std::max_element(std::begin(nums), std::end(nums));
    const auto maxElementIndex = it - nums.begin();
    const auto maxElementValue = nums[maxElementIndex];
    int secondMaxElementValue(0);

    //retrieve second highest value
    if(maxElementIndex == 0)
    {
        //search after first element
        const auto itSecondHalf = std::max_element(std::next(it), std::end(nums));
        secondMaxElementValue = nums[itSecondHalf - nums.begin()];
    }
    else if (maxElementIndex == nums.size() - 1)
    {
        //search before last element
        const auto itFirstHalf = std::max_element(std::begin(nums), it);
        secondMaxElementValue = nums[itFirstHalf - nums.begin()];
    }
    else
    {
        //search both
        const auto itSecondHalf = std::max_element(std::next(it), std::end(nums));
        const auto itFirstHalf = std::max_element(std::begin(nums), it);
        
        secondMaxElementValue = std::max(nums[itFirstHalf - nums.begin()],
                                         nums[itSecondHalf - nums.begin()]);
    }
    
    return (maxElementValue - 1) * (secondMaxElementValue - 1);
}
