#include <iostream> 
#include <algorithm>
bool checkIfPalindrome(std::string str)
{
	std::string originalStr = str;
	std::reverse(str.begin(), str.end());
	return(str == originalStr);
}
int main()
{
	std::string originalString = "GADAG";
	if (checkIfPalindrome(originalString))
	{
		std::cout << "Yes, the string <" << originalString << ">" << " is palindrome" << std::endl;
	}

	originalString = "MADAM";
	if (checkIfPalindrome(originalString))
	{
		std::cout << "Yes, the string <" << originalString << ">" << " is palindrome" << std::endl;
	}
	else
	{
		std::cout << "No, the string <" << originalString << ">" << " is not palindrome" << std::endl;
	}

	originalString = "AAAAA";
	if (checkIfPalindrome(originalString))
	{
		std::cout << "Yes, the string <" << originalString << ">" << " is palindrome" << std::endl;
	}
	else
	{
		std::cout << "No, the string <" << originalString << ">" << " is not palindrome" << std::endl;
	}

	originalString = "ABABC";
	if (checkIfPalindrome(originalString))
	{
		std::cout << "Yes, the string <" << originalString << ">" << " is palindrome" << std::endl;
	}
	else
	{
		std::cout << "No, the string <" << originalString << ">" << " is not palindrome" << std::endl;
	}

	return 0;
}
