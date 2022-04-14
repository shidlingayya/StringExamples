// BasicPrograms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>

std::string checkifSubstring(std::string s1, std::string s2)
{
    bool found = false;
    std::map <char, int> myMap{};

    //Count the character in string
    for (auto i = 0; i < s1.size(); i++)
    {
        myMap[s1.at(i)]++;
    }

    //If any character from s2 is present already in map then its frequency of occurance will be 1
    for (auto j = 0; j < s2.size(); j++)
    {
        if (myMap[s2[j]] > 0)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    std::string str1 = "and";
    std::string str2 = "art";

    std::cout << "str1 = " << str1 << " str2: " << str2 << " " << checkifSubstring(str1, str2) << std::endl;
 
    /*
    str1 = "be";
    str2 = "cat";
    std::cout << "str1 = " << str1 << " str2: " << str2 << " " << checkifSubstring(str1, str2) << std::endl;

    str1 = "hello";
    str2 = "World";
    std::cout << "str1 = " << str1 << " str2: " << str2 << " " << checkifSubstring(str1, str2) << std::endl;

    str1 = "hi";
    str2 = "world";
    std::cout << "str1 = " << str1 << " str2: " << str2 << " " << checkifSubstring(str1, str2) << std::endl;
    */
    return 0;
}

