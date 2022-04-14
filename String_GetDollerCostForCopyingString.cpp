// BasicPrograms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

bool CheckifStringCommonCharacter(std::string dest, char ch)
{
    int found = dest.find(ch);
    if (found != std::string::npos)
    {
        return true;
    }
    return false;
}


int getCostofCopyingString(std::string s1)
{
    int counter = 0;
    std::string dest = "";
    for (auto i = 0U; i < s1.size(); i++)
    {
        if (!CheckifStringCommonCharacter(dest, s1.at(i)))
        {
            dest += s1.at(i);
            counter++;
        }
    }
    return counter;
}

int main()
{
    std::string str1 = "abcd";
    std::cout << "find cost of copying string:" << getCostofCopyingString(str1) << std::endl;
    
    str1 = "abab";
    std::cout << "find cost of copying string:" << getCostofCopyingString(str1) << std::endl;

    str1 = "abcabc";
    std::cout << "find cost of copying string:" << getCostofCopyingString(str1) << std::endl;

    return 0;
}

