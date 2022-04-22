#include <iostream> 
void swapStrs(std::string& str1, std::string& str2)
{
	std::string temp = "";
	temp = str1;
	str1 = str2;
	str2 = temp;
}

int main()
{
	std::string str1 = "Hello";
	std::string str2 = "World";
	std::cout << "Before swap str1 and str2:" << std::endl;
	std::cout << "str1: " << str1 << " str2: " << str2 << std::endl;
	swapStrs(str1, str2);
	std::cout << "After swap str1 and str2:" << std::endl;
	std::cout << "str1: " << str1 << " str2: " << str2 << std::endl;
	return 0;
}
