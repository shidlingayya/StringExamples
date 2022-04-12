// NewApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Its length is at least 6 digit
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+

*/

#include <iostream>
#include <unordered_set>

int minNumForStrongPassword(std::string str)
{
    int counter = 0;
    int digit = 0;
    int lower_case = 0;
    int upper_case = 0;
    int special_characters = 0;

    //Rule2: Number present in string?
    for (auto i = 0U; i < str.size(); i++)
    {
        char ch = str[i];

        if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lower_case++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            upper_case++;
        }
        else
        {
            special_characters++;
        }
    }
    std::cout << "Input String: " << str << " digits: " << digit << "Lower case: " << lower_case << "Upper case: " << upper_case << "Sp ch:" << special_characters << std::endl;

    if (digit == 0)
    {
        counter++;
    }
    if (lower_case == 0)
    {
        counter++;
    }
    if (upper_case == 0)
    {
        counter++;
    }
    if (special_characters == 0)
    {
        counter++;
    }

    if ((str.size() + counter) < 6)
    {
        auto diff = 6 - (str.size() + counter);
        counter += diff;
    }

    return counter;
}

int main()
{
    //std::string str = "Ab1";
    //std::cout << "minimum number required for strong password: " << minNumForStrongPassword(str) << std::endl;

    std::string str = "#HackerRank";
    std::cout << "minimum number required for strong password: " << minNumForStrongPassword(str) << std::endl;

    return 0;
}
