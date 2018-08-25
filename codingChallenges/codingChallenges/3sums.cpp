//
//  3sums.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 25/08/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "3sums.hpp"

std::vector<std::vector <int>> threeSum(std::vector<int>& nums)
{
    std::cout << "\nThe vector to analyze is: ";
    for (auto number : nums) std::cout <<  number << " ";

    std::vector<std::vector <int>> solutionSet;
    //Scans the input vector using a two element sliding window
    for (std::size_t i = 0; i < nums.size() -1; ++i)
    {
        auto a = nums.at(i);
        auto b = nums.at(i+1);
        //Creates a copy of the input vector removing the scanning window elements from it.
        auto clone = nums;
        clone.erase(clone.begin()+i);
        clone.erase(clone.begin()+i);
        /*
        std::cout << "\na = " << a;
        std::cout << "\nb = " << b;
        std::cout << "\nThe available numbers are: ";
        for (auto number : clone) std::cout << number << " ";
        */
        
        //Considering the sliding window's values computes the remaining one.
        auto targetValue = -b -a;
        auto it = find(clone.begin(),clone.end(), targetValue);
        //If the value exists in the copy vector create and save a solution with the three elements.
        if (it != clone.end())
        {
         std::vector <int> aSolution{a,b,targetValue};
         std::sort(aSolution.begin(), aSolution.end());
            
         auto solIt = find(solutionSet.begin(),solutionSet.end(), aSolution);
         if(solIt == solutionSet.end()) solutionSet.push_back(aSolution);
        }
    }
    
    std::cout <<"\nA solution set is: " << std::endl;
    for (auto aSet : solutionSet) {
        for (auto aSetElement : aSet) std::cout << aSetElement << " ";
        std::cout << std::endl;
    }
    
    return solutionSet;
}
