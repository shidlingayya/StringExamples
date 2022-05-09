#include <iostream>
#include <unordered_map>
using namespace std;

int countUniqueChars(std::string& str)
{
    std::unordered_map<char, int> m;
    for (auto i = 0; i < str.size(); i++)
    {
        m[str.at(i)]++;
    }
    return m.size();
}

int main()
{
    std::string str = "abaacdabd";
    std::cout << "Count unique characters from string <abaacdabd> => "<< countUniqueChars(str) << std::endl;
    
    str = "aaabbcc";
    std::cout << "Count unique characters from string <abaacdabd> => " << countUniqueChars(str) << std::endl;

    str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "Count unique characters from string <abaacdabd> => " << countUniqueChars(str) << std::endl;
    return 0;
}