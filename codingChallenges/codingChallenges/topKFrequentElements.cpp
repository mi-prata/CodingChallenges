//
//  topKFrequentElements.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 01/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "topKFrequentElements.hpp"

std::vector<int> returnTopKFrequentElements(std::vector<int>& nums, int k) {
    
    std::unordered_map<int,int> elementsCount;
    std::priority_queue<std::pair<int,int>> freqByElement;
    std::vector<int> aResult;
    
    for (const auto &aNum:nums) elementsCount[aNum]++;
    for (const auto &aPair:elementsCount) freqByElement.push(std::make_pair(aPair.second,aPair.first));
    
    for (int i = 0; i < k; i++)
    {
        aResult.push_back(freqByElement.top().second);
        freqByElement.pop();
    }
    
    return aResult;
}
