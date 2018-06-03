//
//  aux_functions.cpp
//  exercises
//
//  Created by Miguel Prata on 02/06/2018.
//  Copyright © 2018 Miguel Prata. All rights reserved.
//

#include "aux_functions.hpp"

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

std::string find_Largest(const std::vector<std::string> &wordList)
{
    std::string largest;
    
    for (std::size_t i = 0; i < wordList.size(); ++i) if (wordList[i].size() > largest.size()) largest = wordList[i];
    return largest;
}

int longest_Substring(const std::string &s)
{
    std::string buffer, charHolder;
    std::vector<std::string> substrings;
    
    std::size_t i = 0,
                length = 0,
                reset = 0;
    
    while (i != s.size())
    {
        charHolder = s[i];
        //If a character is not found in buffer
        if (buffer.find(charHolder) == std::string::npos)
        {
        //Saves it and increments index.
         buffer.append(charHolder);
         ++i;
        }
        //If the character is present in the buffer
        else{
            ++reset;
            //Save current substring
            substrings.push_back(buffer);
            //Erase characters from buffer
            buffer.erase(buffer.begin(),buffer.end());
            //Reset i
            i = reset;
        }
        //in case it's the last character of the string
        if (i == s.size()) substrings.push_back(buffer);        
    }
    //Outputs all substrings and registers the size of the longest one.
    std::cout << "The substrings are: ";
    for (std::size_t i = 0; i < substrings.size(); ++i) {
        std::cout << substrings[i] << " ";
        if (substrings[i].size() > length) length = substrings[i].size();
    }
    return int (length);
    
}
