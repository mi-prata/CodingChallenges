//
//  3sum.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 21/06/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "3sum.hpp"

std::vector<std::vector<int>> threeSumFast(std::vector<int>& nums)
{
    //twoPointerTechique
    std::vector<std::vector<int>> aResultSet;
    if (nums.size() < 3 ) return aResultSet;
    std::sort(nums.begin(), nums.end());
    const auto numberOfElements = nums.size();
    
    for (size_t i = 0; i < numberOfElements; i++)
    {
        if (nums[i] > 0) break; //all other numbers are positive
        
        if (i > 0 and nums[i] == nums[i-1]) continue; // we have seen this number before;
        
        int left = static_cast<int>(i + 1), right = static_cast<int>(numberOfElements - 1);
        while (left < right)
        {
            const auto aSum = nums[i] + nums[left] + nums[right];

            if(aSum == 0)
            {
                //triplet Found
                aResultSet.push_back({nums[i],nums[left], nums[right]});
                
                int last_left = nums[left], last_right = nums[right];
                // we have seen this number before; skip
                while (left < right && nums[left] == last_left) ++left;
                while (left < right && nums[right] == last_right) --right;
            }
            else if(aSum > 0) right--;
            else if(aSum < 0) left++;
        }
    }
    
    
    /*
    //execution is too slow, times out in test 311/313
    std::map<vector<int>,bool> aTripletsUsed;
    std::unordered_map<int,int> aElementCount;
    for (const auto &aElement : nums) aElementCount[aElement]++;
    
    for (size_t i = 0; i < nums.size(); i++)
    {
        for(size_t j = 0; j < nums.size(); j++)
        {
            if (j != i)
            {
             const auto aNum = nums[i];
             const auto bNum = nums[j];
             const auto cNum = -bNum -aNum;
             vector<int> aTriplet = {aNum, bNum, cNum};
             std::sort(aTriplet.begin(), aTriplet.end());
             const auto cNumCount = aElementCount[cNum];
            
             if(cNumCount != 0 and
                aTripletsUsed[{aTriplet[0], aTriplet[1]}] == false)
             {
              aTripletsUsed[{aTriplet[0], aTriplet[1]}] = true;
             
              if ((cNum == bNum) &&
                  (cNum != aNum) &&
                  (cNumCount > 1))
              {
                  aResultSet.push_back(aTriplet);
              }
              else if((cNum == aNum) &&
                      (cNum != bNum) &&
                      (cNumCount > 1))
              {
                  aResultSet.push_back(aTriplet);
              }
              else if((cNum == aNum) &&
                      (cNum == bNum) &&
                      (cNumCount > 2))
              {
                  aResultSet.push_back(aTriplet);
              }
              else if (aNum != cNum &&
                       bNum != cNum)
              {
                  aResultSet.push_back(aTriplet);
              }
             }
            }
        }
    }
    */
    return aResultSet;
}

std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
{
    //execution is too slow, times out in test 311/313
    std::vector<std::vector<int>> aResultSet;
    if (nums.size() < 3 ) return aResultSet;
    std::map<std::vector<int>,bool> aTripletsUsed;
    std::unordered_map<int,int> aElementCount;
    for (const auto &aElement : nums) aElementCount[aElement]++;
    
    for (size_t i = 0; i < nums.size(); i++)
    {
        for(size_t j = 0; j < nums.size(); j++)
        {
            if (j != i)
            {
             const auto aNum = nums[i];
             const auto bNum = nums[j];
             const auto cNum = -bNum -aNum;
             std::vector<int> aTriplet = {aNum, bNum, cNum};
             std::sort(aTriplet.begin(), aTriplet.end());
             const auto cNumCount = aElementCount[cNum];
            
             if(cNumCount != 0 and
                aTripletsUsed[{aTriplet[0], aTriplet[1]}] == false)
             {
              aTripletsUsed[{aTriplet[0], aTriplet[1]}] = true;
             
              if ((cNum == bNum) &&
                  (cNum != aNum) &&
                  (cNumCount > 1))
              {
                  aResultSet.push_back(aTriplet);
              }
              else if((cNum == aNum) &&
                      (cNum != bNum) &&
                      (cNumCount > 1))
              {
                  aResultSet.push_back(aTriplet);
              }
              else if((cNum == aNum) &&
                      (cNum == bNum) &&
                      (cNumCount > 2))
              {
                  aResultSet.push_back(aTriplet);
              }
              else if (aNum != cNum &&
                       bNum != cNum)
              {
                  aResultSet.push_back(aTriplet);
              }
             }
            }
        }
    }
    return aResultSet;
}
