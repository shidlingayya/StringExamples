#include <iostream> 
#include <algorithm>
#include <map>
char getMaxCharsInString(const std::string str)
{
	std::map<char, int> myMap{};
	for (auto i = 0; i < str.size(); i++)
	{
		myMap[str.at(i)]++;
	}

	char ch = 0;
	int max = INT_MIN;
	for (auto x : myMap)
	{
		if (x.second > max)
		{
			max = x.second;
			ch = x.first;
		}
	}

	return ch;
}
int main()
{
	std::string str = "GADAG";
	std::cout << "maximum occurance of character in string: <" << str << ">:" << getMaxCharsInString(str) << std::endl;
	
	str = "TTTTTTT";
	std::cout << "maximum occurance of character in string: <" << str << ">:" << getMaxCharsInString(str) << std::endl;
	
	str = "ABCDDEF";
	std::cout << "maximum occurance of character in string: <" << str << ">:" << getMaxCharsInString(str) << std::endl;
	
	return 0;
}
