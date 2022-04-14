// BasicPrograms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <algorithm>
#include <string>

//aaabbbb
std::string CheckIfStringPalindrome(std::string& s1)
{
    std::map<char, int> myMap{};
    int singleCharacterCounter = 0;

    //The condition for palindrome is that - except one character all other character count has to be equal
    for (auto i = 0U; i < s1.size(); i++)
    {
        myMap[s1.at(i)]++;
    }

    for (auto x : myMap)
    {
        if (x.second%2 )
        {
            singleCharacterCounter++;
        }
    }

    if (singleCharacterCounter > 1)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    std::string str1 = "aaabbbb";
    std::cout << "CheckIfStringPalindrome " << CheckIfStringPalindrome(str1) << std::endl;

    str1 = "cdefghmnopqrstuvw";
    std::cout << "CheckIfStringPalindrome " << CheckIfStringPalindrome(str1) << std::endl;

    str1 = "aaabbbb";
    std::cout << "CheckIfStringPalindrome " << CheckIfStringPalindrome(str1) << std::endl;
    return 0;
}

