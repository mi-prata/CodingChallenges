//
//  aux_functions.hpp
//  exercises
//
//  Created by Miguel Prata on 02/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#ifndef aux_functions_hpp
#define aux_functions_hpp

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

#endif /* aux_functions_hpp */

//Reads text from a file and stores them in a string. Assumes 1 word per line.
void load_Data(const std::string &fileName, std::vector<std::string> &wordsFound);

//Identifies palindromes in a list. Assumes all words to be lower case.
void find_Palindromes(const std::vector<std::string> &wordList, std::vector<std::string> &palindromes);

//Returns the longest string from a set of input strings.
std::string find_Largest(const std::vector<std::string> &wordList);

//For an input string identifies all substrings composed of unique characters.
//Returns the length of the longest substring.
//Uses a non optimized sliding window technique. Could be improved to increment more than one character at a time, by using a map.
int longest_Substring(const std::string &s);
