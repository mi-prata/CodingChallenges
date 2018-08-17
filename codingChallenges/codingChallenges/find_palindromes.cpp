//
//  find_palindromes.cpp
//  codingChallenges
//
//  Created by Miguel Prata on 29/07/2018.
//  Copyright © 2018 mjsp. All rights reserved.
//

#include "find_palindromes.hpp"

void find_Palindromes(const std::vector<std::string> &wordList, std::vector<std::string> &palindromes)
{
    //Loop all words
    for (std::size_t i = 0; i < wordList.size(); ++i)
    {
        std::string currentWord = wordList[i];
        //A word must be at least 3 characters long to be a palindrome
        if (currentWord.size() > 2)
        {
            std::string firstHalf, secondHalf;
            auto last = currentWord.size();
            auto center = last / 2;
            
            //Appends the first and second halves of the word to strings
            firstHalf = currentWord.substr(0, center);
            //Ignores central character if the word is odd
            if (currentWord.size() % 2 == 0) secondHalf = currentWord.substr(center, last);
            else secondHalf = currentWord.substr(center + 1, last);
            
            //Reverses the second half of the word
            std::reverse(secondHalf.begin(), secondHalf.end());
            
            //If the halves are equal, it's a palindrome
            if (firstHalf.compare(secondHalf) == 0) palindromes.push_back(currentWord);
        }
    }
}

bool is_palindrome(const std::string& s) {return equal(s.begin(), s.end(), s.rbegin()); }

std::string find_Largest(const std::vector<std::string> &wordList)
{
    std::string largest;
    
    for (std::size_t i = 0; i < wordList.size(); ++i) if (wordList[i].size() > largest.size()) largest = wordList[i];
    return largest;
}
