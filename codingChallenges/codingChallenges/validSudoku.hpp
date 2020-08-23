//
//  validSudoku.hpp
//  codingChallenges
//
//  Created by Miguel Prata on 23/08/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#ifndef validSudoku_hpp
#define validSudoku_hpp

#include "libraries.hpp"

#endif /* validSudoku_hpp */




    
std::vector<int> readRowNumbers(const std::vector<std::vector<char>> &board, const int rowNumber);
std::vector<int> readColumnNumbers(const std::vector<std::vector<char>> &board, const int columnNumber);
std::vector<int> readSquareNumbers(const std::vector<std::vector<char>> &board, const int x, const int y);

bool containsRepeated (const std::vector<int> &iToCheck);

bool isValidSudoku(std::vector<std::vector<char>>& board);

