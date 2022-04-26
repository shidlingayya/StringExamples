#include <iostream>
using namespace std;

int getCharIndex(std::string& str)
{
	std::string origStr = str; //Keep original string
	std::int32_t index = -1;
	std::string tempStr = "";

	//Check if already palindrome
	std::reverse(origStr.begin(), origStr.end());
	if (origStr == str)
	{
		return -1;
	}
	origStr = str;
	for (auto i = 0U; i < str.size(); i++)
	{
		tempStr = str.erase(i, 1);
		std::string originalStr = tempStr;
		std::reverse(tempStr.begin(), tempStr.end());
		if (originalStr == tempStr)
		{
			index = i;
			break;
		}
		str = origStr;
	}
	return index;
}

int main()
{
	std::string str = "aaab";
	std::cout << str << "will palindrome if char index " << getCharIndex(str) << " is removed " << std::endl;

	str = "baa";
	std::cout << str << "will palindrome if char index " << getCharIndex(str) << " is removed " << std::endl;

	str = "aaa";
	std::cout << str << "will palindrome if char index " << getCharIndex(str) << " is removed " << std::endl;

	str = "abcbea";
	std::cout << str << "will palindrome if char index " << getCharIndex(str) << " is removed " << std::endl;

	str = "abecbea";
	std::cout << str << "will palindrome if char index " << getCharIndex(str) << " is removed " << std::endl;	
	
	return 0;
}
