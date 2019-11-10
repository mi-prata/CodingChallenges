//
//  checkBalancedBrackets.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "checkBalancedBrackets.hpp"

bool checkBalancedBrackets(const std::string &iInputString)
{
    bool aResult (false);
    
    std::map<char, char> matchingChars;
    matchingChars['}']  = '{';
    matchingChars[']']  = '[';
    matchingChars[')']  = '(';
    std::string holder;
    
    //first character is a left bracket
    if (iInputString.find_first_of("{[(") == 0)
    {
     for (std::string::size_type i = 0; i < iInputString.size() ; ++i)
     {
         //store opening brackets
         if (iInputString[i] == '(' ||
             iInputString[i] == '{' ||
             iInputString[i] == '[')
         {
             holder.push_back(iInputString[i]);
         }
         else //found closing brackets
         {
             //check for last element: must close matching parentheses
             if (matchingChars[iInputString[i]] == holder[holder.size()-1])
             {
                 //remove from holder
                 holder.pop_back();
                 aResult = true;
             }
             else aResult = false;
         }
      }
    }
    
    return aResult;
}
