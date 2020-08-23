//
//  validSudoku.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 23/08/2020.
//  Copyright © 2020 mjsp. All rights reserved.
//

#include "validSudoku.hpp"

    
    std::vector<int> readRowNumbers(const std::vector<std::vector<char>> &board, const int rowNumber)
    {
        std::vector<int> aRow;
    
        for(int i = 0; i < 9; ++i)
            {
                if(std::isdigit(board[i][rowNumber]))
                {
                    std::string tmp;
                    tmp += board[i][rowNumber];
                    aRow.push_back(std::stoi(tmp));
                }
            }
        return aRow;
    }
    
    std::vector<int> readColumnNumbers(const std::vector<std::vector<char>> &board, const int columnNumber)
    {
        std::vector<int> aColumn;
    
        for(int i = 0; i < 9; ++i)
            {
                if(std::isdigit(board[columnNumber][i]))
                {
                    std::string tmp;
                    tmp += board[columnNumber][i];
                    aColumn.push_back(std::stoi(tmp));
                }
            }
        return aColumn;
    }
    
    std::vector<int> readSquareNumbers(const std::vector<std::vector<char>> &board, const int x, const int y)
    {
        std::vector<int> aSquare;
    
        for(int i = x; i < x + 3; ++i)
            for(int j = y; j < y + 3; ++j)
            {
                if(std::isdigit(board[i][j]))
                {
                    std::string tmp;
                    tmp += board[i][j];
                    aSquare.push_back(std::stoi(tmp));
                }
            }
        return aSquare;
    }
    bool containsRepeated (const std::vector<int> &iToCheck)
    {
        std::unordered_set<int> aTmpSet;
        for(const auto &aNum : iToCheck) aTmpSet.insert(aNum);
        return aTmpSet.size() < iToCheck.size();
    }

    bool isValidSudoku(std::vector<std::vector<char>>& board)
    {
        bool aReturnValue (true);
            
        for(int i = 0; i < 9; i++)
        {
            const auto aRow = readRowNumbers(board, i);
            const auto aColumn = readColumnNumbers(board, i);
            if(containsRepeated(aRow) ||
               containsRepeated(aColumn))
            {
                aReturnValue = false;
                break;
            }
        }
        if(aReturnValue)
        {
        for(int i = 0; i < 9; i += 3)
            for(int j = 0; j < 9; j += 3) if(containsRepeated(readSquareNumbers(board,i,j)))
            {
                aReturnValue = false;
                break;
            }
        }
        return aReturnValue;
    }

