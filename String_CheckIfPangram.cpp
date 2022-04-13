#include <iostream>
#include <string>
#include <algorithm>

std::string CheckIfStringPangram(std::string str)
{
    std::string strValue = "";
    const std::string PANGRAM = "pangram";
    const std::string NOT_PANGRAM = "not pangram";

    //If length is less than 26 then it is not pangram
    if (str.size() < 26)
    {
        return NOT_PANGRAM;
    }

    //Convert all string characters to lower
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    //Sort the string to arrange letters in abcdefghijklmnopqrstuvwxyz
    std::sort(str.begin(), str.end());

    //Delete duplicate elements
    auto it = std::unique(str.begin(), str.end());
    str.resize(distance(str.begin(), it));

    int found1 = str.find("abcdefghijklmnopqrstuvwxyz");
    int found2 = str.find("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    std::cout << "Input String: " << str << "found1: " << found1 << "found2: " << found2 << std::endl;

    if ((found1 != std::string::npos) || (found2 != std::string::npos))
    {
        strValue = PANGRAM;
    }
    else
    {
        strValue = NOT_PANGRAM;
    }

    return strValue;
}

int main()
{
    std::string str = "We promptly judged antique ivory buckles for the next prize";
    std::cout << "String is: " << CheckIfStringPangram(str) << std::endl;
    return 0;
}
