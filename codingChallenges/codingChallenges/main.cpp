//
//  main.cpp
//  CodingChallenges
//
//  Created by Miguel Prata on 03/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#include "dataLoader.hpp"
#include "find_palindromes.hpp"
#include "longest_substring.hpp"
#include "find_max_consecutive_ones.hpp"
#include "zig_zag_conversion.hpp"
#include "3sums.hpp"

int main(int argc, const char * argv[]) {

    //Full path to file with list of words for analysis.
    std::string fileLocation = "/Users/miguelprata/Desktop/coding/wordList.txt";
    std::vector<std::string> listOfWords;
    std::vector<std::string> foundPalindromes;
    
    //Load input data
    load_Data(fileLocation, listOfWords);
    
    //Identify palindromes
    find_Palindromes(listOfWords, foundPalindromes);
    
    //Print
    std::cout << "Found " << foundPalindromes.size() << " palindromes. \n" << std::endl;
    for (auto palindrome : foundPalindromes) std::cout << palindrome << " ";
    
    //Identify largest palindrome
    std::string bigOne = find_Largest(foundPalindromes);
    std::cout << "\nThe  largest one is: " << bigOne << std::endl;
    
    //Lenght of longest substring without repeating characters
    std::cout << std::endl;
    int lenght = longest_Substring("pwwkew");
    std::cout << "\nThe largest one is " << lenght << " characters long." << std::endl << std::endl;
    
    //Max consecutive ones
    std::vector<int> binaryArray = {1,1,0,1,1,1};
    std::cout << "The binary array is: ";
    for (auto bit : binaryArray) std::cout << bit;
        
    auto answer = findMaxConsecutiveOnes (binaryArray);
    std::cout << "\nThe maximum number of consecutive 1s is " << answer << "." << std::endl << std::endl;
    
    //ZigZag conversion
    std::string inputZigZag = "PAYPALISHIRING";
    std::cout << "The string to convert is: " << inputZigZag << std::endl;
    int numRows = 4;
    auto zigZagResult = convertZigZag (inputZigZag,numRows);
    std::cout << "The converted string is: " << zigZagResult << std::endl;
    
    //3Sums
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    threeSum (nums);
    return 0;
}
