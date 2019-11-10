//
//  twoSum.cpp
//
//
//  Created by Miguel Prata on 10/11/2019.
//  Copyright © 2019 mjsp. All rights reserved.
//

#include "closestPair.hpp"


t_IntPair closestPair(const std::vector<int> &iArray1,
                      const std::vector<int> &iArray2,
                      const int &iTarget)
{
    t_IntPair aPair;
    std::map<int, t_IntPair> results;
    
    for (const auto &v1 : iArray1)
    {
        for (const auto &v2 : iArray2)
        {
            auto diff = abs(iTarget - (v1+v2));
            results [diff] = std::make_pair(v1, v2);
        }
    }
    
    std::map<int, t_IntPair>::iterator it = results.begin();
    aPair = std::make_pair(it->second.first, it->second.second);

    return aPair;
}
