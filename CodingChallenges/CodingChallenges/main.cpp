//
//  main.cpp
//  CodingChallenges
//
//  Created by Miguel Prata on 03/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#include "auxiliarStringFunctions.hpp"
#include "dataLoader.hpp"

int main(int argc, const char * argv[]) {

    //Full path to file with list of words for analysis.
    std::string fileLocation = "Users/miguelprata/Desktop/coding/wordList.txt";
    std::vector<std::string> listOfWords;
    std::vector<std::string> foundPalindromes;
    
    //Load input data
    load_Data(fileLocation, listOfWords);
    
    //Identify palindromes
    find_Palindromes(listOfWords, foundPalindromes);
    
    //Print
    std::cout << "Found " << foundPalindromes.size() << " palindromes. " << std::endl;
    for (std::size_t i = 0 ; i < foundPalindromes.size(); ++i) std::cout << foundPalindromes[i] << " ";
    
    //Identify largest palindrome
    std::string bigOne = find_Largest(foundPalindromes);
    std::cout << "\nThe largest one is: " << bigOne << std::endl;
    
    //Lenght of longest substring without repeating characters
    std::cout << std::endl;
    int lenght = longest_Substring("pwwkew");
    std::cout << "\nThe largest one is " << lenght << " characters long." << std::endl << std::endl;
    
    return 0;
}
