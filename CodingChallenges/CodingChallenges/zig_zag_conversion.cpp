//
//  zig_zag_conversion.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "zig_zag_conversion.hpp"

std::string convertZigZag(std::string s, int numRows)
{
    if (numRows <= 1) return s;
    
    t_CharMatrix zigZagMatrix;
    zigZagMatrix.resize(numRows);
    //for (auto &row : zigZagMatrix) row.resize(s.length());
    
    int i = 0;
    bool ascending = false;
    //loops every character in the string
    for (const auto &currentChar : s)
    {
        
        zigZagMatrix[i].push_back(currentChar);
        //When going through the matrix in asceding order we must always advance one column.
        if (ascending == true)
        {
            zigZagMatrix[i].push_back(' ');
            --i;
        }
        //increments row iterator to descend
        if (ascending == false) ++i;
        //toggles direction at the first and last row
        if (i == 0 || i == zigZagMatrix.size() - 1) ascending = !ascending;
    }
    
    std::string answer;
    
    for (std::size_t i = 0; i < zigZagMatrix.size(); ++i)
    {
        for (std::size_t j = 0; j < zigZagMatrix[i].size(); ++j)
        {
            if(zigZagMatrix[i][j] != ' ')  answer += zigZagMatrix[i][j];
        }
    }
    return answer;
}
