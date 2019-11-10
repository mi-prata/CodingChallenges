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
#include "twoSum.hpp"
#include "addTwoNumbers.hpp"
#include "closestPair.hpp"

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
    
    //Two Sum
    std::vector<int> nums = {3,2,3};
    int target = 6;
    auto twoSumFastAnswer = twoSumFast(nums, target);
    std::cout << "\nThe array is [";
    for (auto i : nums) std::cout << i << " ";
    std::cout << "]\nThe target value is: " << target;
    std::cout << "\nThe indexes whose values sum equals the target are: ";
    for (auto i : twoSumFastAnswer) std::cout << i << " ";
    std::cout << std::endl;
    
    //3Sums
    std::vector<int> threeSumsInput = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
    std::cout << "\nThe array is [";
    for (auto i : threeSumsInput) std::cout << i << " ";
    std::cout << "]\nThe solution set is: \n";
    auto threeSumAnswer = threeSum (threeSumsInput);
    for (auto aSolution : threeSumAnswer)
    {
        for(auto anElement : aSolution) std::cout << anElement << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    //Add Two Numbers

    linked_list firstList, secondList, resultList;
    initialization (firstList, secondList);

    firstList.display();
    std::cout << std::endl;
    secondList.display();
    
    int teste = 9;
    storeValues(resultList, teste);
    storeValues(resultList, teste);
    storeValues(resultList, teste);    
    std::cout << std::endl;
    resultList.display();
    
    std::cout << std::endl << std::endl;
    //closestPair
    
    std::vector<int> closestPairVec1 = {-1, 3, 8, 2, 9, 5};
    std::vector<int> closestPairVec2 = {4, 1, 2, 10, 5, 20};
    int closestPairTarget = 24;
    
    auto closestPairSolution = closestPair(closestPairVec1,
                                           closestPairVec2,
                                           closestPairTarget);
    
    std::cout << "The pair whose sum yields the closest result to the target value "
              << closestPairTarget << " is ("
              << closestPairSolution.first << ", "
              << closestPairSolution.second <<").";
     
    std::cout << std::endl << std::endl;
    return 0;
}
