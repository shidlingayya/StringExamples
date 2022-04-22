#include <iostream> 
#include <string>
#include <set>
std::string removeDuplicates(std::string str)
{
	std::set<char> mySet;
	for (auto i = 0; i < str.size(); i++)
	{
		mySet.insert(str[i]);
	}

	std::string outputStr = "";
	for (auto x : mySet)
	{
		outputStr += x;
	}
	return outputStr;
}
int main()
{
	std::string str = "GADAG";
	std::cout << "Removing duplicates characters in <" << str << "> :" << removeDuplicates(str) << std::endl;	
	return 0;
}
