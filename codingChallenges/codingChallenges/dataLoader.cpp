//
//  dataLoader.cpp
//  CodingChallenges
//
//  Created by Miguel Prata on 03/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#include "dataLoader.hpp"

void load_Data(const std::string &fileName, std::vector<std::string> &wordsFound)
{
    std::ifstream myfile (fileName);
    std::string line;
    
    if (myfile.is_open()) {
        while (std::getline(myfile, line)) {
            wordsFound.push_back(line);
        }
    }
    myfile.close();
}
