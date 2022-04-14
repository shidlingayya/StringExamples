// BasicPrograms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>

bool CheckStringIsPalindrome(std::string s)
{
    for (auto i = 0U; i < s.size(); i++) 
    {
        if (s[i] != s[s.size() - i - 1]) 
        {
            return false;
        }
    }
    return true;
}

int palindromeIndex(std::string s1)
{
    long index = -1;

    if (CheckStringIsPalindrome(s1))
    {
        return index;
    }

    std::string tempStr = s1;
    for (auto i = 0; i < s1.size(); ++i)
    {
        tempStr.erase(i, 1);
        if (CheckStringIsPalindrome(tempStr))
        {
            index = i;
            break;
        }
        tempStr = s1; //Restore the original string
    }

    return index;

}

int main()
{
    std::string str1 = "aaa";
    std::cout << "Index of character which removal results into palindrome :" << palindromeIndex(str1) << std::endl;

    str1 = "aaab";
    std::cout << "Index of character which removal results into palindrome :" << palindromeIndex(str1) << std::endl;

    str1 = "baa";
    std::cout << "Index of character which removal results into palindrome :" << palindromeIndex(str1) << std::endl;

    str1 = "bcbc";
    std::cout << "Index of character which removal results into palindrome :" << palindromeIndex(str1) << std::endl;

    return 0;
}

