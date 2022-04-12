// NewApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_set>

std::string getReducedString(std::string str)
{
    for (auto i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            str.erase(i - 1, 2);
            i = 0;
        }
    }
    return str;
}

int main()
{
    std::string str = "aab";
    std::cout << "reduced string: " << getReducedString(str) << std::endl;
    return 0;
}
