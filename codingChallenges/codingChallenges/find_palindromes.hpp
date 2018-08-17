//
//  find_palindromes.hpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#ifndef find_palindromes_hpp
#define find_palindromes_hpp


#include "libraries.hpp"

#endif /* find_palindromes_hpp */


//Identifies palindromes in a list. Assumes all words to be lower case.
void find_Palindromes(const std::vector<std::string> &wordList, std::vector<std::string> &palindromes);
//Returns true if a string is palindrome, false otherwise.
bool is_palindrome(const std::string& s);

//Returns the longest string from a set of input strings.
std::string find_Largest(const std::vector<std::string> &wordList);
