#include <iostream> 
#include <string>
#include <vector>
#include <thread>

void getEqualStrings(const std::string &str, std::vector<std::string>& equalStrings)
{
	int len = str.length();
	if (len % 2 != 0)
	{
		std::cout << "String is odd len - can't be split into equal" << std::endl;
		return;
	}

	equalStrings.push_back(str.substr(0, len / 2));
	equalStrings.push_back(str.substr(len/2, len));
}

int main()
{
	std::string myString = "HELLOWORLD";
	std::vector<std::string> equalStrings{};
	getEqualStrings(myString, equalStrings);
	if (!equalStrings.empty())
	{
		std::cout << "String <" << myString << ">" << "After splitting into two equal peaces " << std::endl;
		for (auto x : equalStrings)
		{
			std::cout << x << std::endl;
		}
	}
	return 0;
}
