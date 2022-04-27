#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
bool checkIfStrFunny(string str)
{
	std::vector<int> myVect1{};
	std::vector<int> myRevVect{};

	for (auto i = 0U; i < str.size()-1; i++)
	{
		myVect1.push_back(abs(str[i]-str[i+1]));
	}
 
	std::reverse(str.begin(), str.end());

	for (auto i = 0U; i < str.size()-1; i++)
	{
		myRevVect.push_back(abs(str[i]-str[i+1]));
	}
	return (myVect1 == myRevVect);
}

int main()
{
	std::string str = "acxz";
	std::cout << "String is Funny? ";
	if (checkIfStrFunny(str))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{ 
		std::cout << "NO" << std::endl;
	}

	str = "lmnop";
	std::cout << "String is Funny? ";
	if (checkIfStrFunny(str))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	str = "bcxz";
	std::cout << "String is Funny? ";
	if (checkIfStrFunny(str))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}