#include <iostream> 
#include <algorithm>

bool checkIfStringsRotated(std::string str1, std::string str2)
{
	std::sort(str1.begin(), str1.end());
	std::sort(str2.begin(), str2.end());
	return(str1 == str2);
}
int main()
{
	std::string str1 = "ABCDB";
	std::string str2 = "CDABB";
	std::cout << str1 << " is rotation of " << str2 << "> ?";
	if (checkIfStringsRotated(str1, str2))
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	str1 = "ABACD";
	str2 = "CDABA";
	std::cout << str1 << " is rotation of " << str2 << "> ?";
	if (checkIfStringsRotated(str1, str2))
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	str1 = "ABCD";
	str2 = "AACD";
	std::cout << str1 << " is rotation of " << str2 << "> ?";
	if (checkIfStringsRotated(str1, str2))
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}
	return 0;
}
