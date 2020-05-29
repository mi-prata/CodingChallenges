//
//  rottingOranges.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 10/11/2019.
//  Copyright © 2019 mjsp. All rights reserved.
//

#include "rottingOranges.hpp"

int orangesRotting(std::vector<std::vector<int>>& grid) {
    
    int aResult(0);
    
    std::vector<std::pair<int,int>> freshOranges;
    std::vector<std::pair<int,int>> rottenOranges;
    std::set <std::pair<int,int>> rottenThisTurn;
    
    freshOranges.reserve(grid.size()*2);
    rottenOranges.reserve(grid.size()*2);
    //First we gather all the coordinates of both fresh and rotten oranges from the input grid.
    for (size_t i = 0; i <  grid.size(); i++)
        for (size_t j = 0; j <  grid[i].size(); j++)
        {
            if (grid[i][j] == 1) freshOranges.push_back(std::make_pair(i,j));
            else if (grid[i][j] == 2) rottenOranges.push_back(std::make_pair(i,j));
        }
    //For each rotten orange, we generate the surrouding coordinates where a fresh orange can be.
    for (size_t i = 0; i < rottenOranges.size(); i++)
    {
            const auto &aRottenOrange = rottenOranges[i];
            const auto rightSide = std::make_pair(aRottenOrange.first, aRottenOrange.second + 1);
            const auto freshIterRight = std::find(freshOranges.begin(), freshOranges.end(), rightSide);
            //If the generated coordinate exists in the fresh orange stack from the input grid, we add it to the rotten this turn set.
            if(freshIterRight != freshOranges.end()) rottenThisTurn.insert(rightSide);

            const auto leftSide = std::make_pair(aRottenOrange.first, aRottenOrange.second - 1);
            const auto freshIterLeft = std::find(freshOranges.begin(), freshOranges.end(), leftSide);
            if(freshIterLeft != freshOranges.end()) rottenThisTurn.insert(leftSide);

            const auto above = std::make_pair(aRottenOrange.first -1 , aRottenOrange.second);
            const auto freshIterAbove = std::find(freshOranges.begin(), freshOranges.end(), above);
            if(freshIterAbove != freshOranges.end()) rottenThisTurn.insert(above);

            const auto under = std::make_pair(aRottenOrange.first + 1 , aRottenOrange.second);
            const auto freshIterUnder = std::find(freshOranges.begin(), freshOranges.end(), under);
            if(freshIterUnder != freshOranges.end()) rottenThisTurn.insert(under);
            //After iterating throught all the currently rotten oranges, and if it's still possible to rot more oranges, we increment our result.
            if (i == rottenOranges.size() - 1 and not rottenThisTurn.empty())
            {
                aResult++;
                //Here is the important part: all the oranges that became rotten during the current turn are added to the rotten oranges vector, on which we are iterating, and are removed from the fresh oranges one.
                for (const auto &aRotten : rottenThisTurn)
                {
                    rottenOranges.push_back(aRotten);
                    const auto iter = std::find(freshOranges.begin(), freshOranges.end(), aRotten);
                    freshOranges.erase(iter);
                }
                //We clear the set so it can be reused.
                rottenThisTurn.erase(rottenThisTurn.begin(), rottenThisTurn.end());
            }
    }
    if (not freshOranges.empty()) aResult = -1;
    
    return aResult;
}
