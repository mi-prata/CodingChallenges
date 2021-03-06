//
//  myTypes.hpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#ifndef myTypes_hpp
#define myTypes_hpp

#include <stdio.h>
#include <vector>

#endif /* myTypes_hpp */

///Type for 2D matrix of double elements.
typedef std::vector<std::vector<double>> t_DoubleMatrix;

///Type for 2D matrix of string elements.
typedef std::vector<std::vector<std::string>> t_StringMatrix;

///Type for 2D matrix of char elements.
typedef std::vector<std::vector<char>> t_CharMatrix;

///Type for array of char elements.
typedef std::vector<char> t_CharVector;

///Type for array of int elements.
typedef std::vector<int> t_IntVector;

///Type for 2D matrix of char elements.
typedef std::vector<t_IntVector> t_IntMatrix;

///t_IntPair
typedef std::pair<int, int> t_IntPair;

///vector of pairs
typedef std::vector<t_IntPair> t_PairVector;
