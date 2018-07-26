//
//  dataLoader.hpp
//  CodingChallenges
//
//  Created by Miguel Prata on 03/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#ifndef dataLoader_hpp
#define dataLoader_hpp

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

#endif /* dataLoader_hpp */

//Reads text from a file and stores them in a string. Assumes 1 word per line.
void load_Data(const std::string &fileName, std::vector<std::string> &wordsFound);
