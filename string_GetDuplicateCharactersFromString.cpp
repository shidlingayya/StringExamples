#include <iostream> 
#include <string>
#include <map>
#include <vector>
std::vector<char> getDuplicateCharacters(std::string str)
{
	std::vector<char> duplicateCount{};
	std::map<char, int> myMap{};
	for (auto i = 0U; i < str.size(); i++)
	{
		myMap[str[i]]++;
	}

	for (auto x : myMap)
	{
		if (x.second > 1)
		{
			duplicateCount.push_back(x.first);
		}
	}

	return duplicateCount;
}
int main()
{
	std::string str = "GADAGADFQEREWDSDSFTDSGDSREREWRE";
	std::cout << "Duplicate characters in <" << str << ">" << "===>";
	std::vector<char> duplicateCharacters = getDuplicateCharacters(str);
	std::cout << "{";
	for (auto x : duplicateCharacters)
	{
		std::cout << x;
	}
	std::cout << "}" << std::endl;
	return 0;
}
