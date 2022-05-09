#include <iostream>
#include <unordered_map>
using namespace std;

std::string deleteAllOccOfCharacter(std::string& str, char ch)
{
   str.erase(remove(str.begin(), str.end(), ch), str.end());
   return str;
}


int main()
{
    std::string str = "abaacdabd";
    std::cout << "Delete occurance of a from <abaacdabd> => deleted string <" << deleteAllOccOfCharacter(str, 'a') << ">" << std::endl;
    
    str = "aaabbcc";
    std::cout << "Delete occurance of a from <aaabbcc> => deleted string <" << deleteAllOccOfCharacter(str, 'b') << ">" << std::endl;
    return 0;
}