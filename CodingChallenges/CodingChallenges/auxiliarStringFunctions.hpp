//
//  auxiliarStringFunctions.hpp
//  CodingChallenges
//
//  Created by Miguel Prata on 03/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#ifndef auxiliarStringFunctions_hpp
#define auxiliarStringFunctions_hpp

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>
#include <iostream>
#include <fstream>
#include <map>
#include <set>

#endif /* auxiliarStringFunctions_hpp */

//Identifies palindromes in a list. Assumes all words to be lower case.
void find_Palindromes(const std::vector<std::string> &wordList, std::vector<std::string> &palindromes);

//For an input string identifies all substrings composed of unique characters.
//Returns the length of the longest substring.
//Uses a non optimized sliding window technique. Could be improved to increment more than one character at a time, by using a map.
int longest_Substring(const std::string &s);


//Returns the longest string from a set of input strings.
std::string find_Largest(const std::vector<std::string> &wordList);
