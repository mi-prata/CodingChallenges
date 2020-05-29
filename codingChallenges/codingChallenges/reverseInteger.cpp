//
//  reverseInteger.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/05/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//
#include "reverseInteger.hpp"


int reverse(int x)
{
    int aResult = 0;
    try
    {
        auto toBeReversed = std::to_string(x);
        std::reverse(toBeReversed.begin(), toBeReversed.end());
        aResult = stoi(toBeReversed);
    }
    catch(...)
    {
        return 0;
    }
    
    return (x < 0) ? -1 * aResult : aResult;
}



