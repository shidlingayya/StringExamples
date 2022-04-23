#include <iostream> 
#include <string>
#include <map>
#include <vector>
std::string removechars(std::string str1, std::string str2)
{
	for (auto i = 0U; i < str1.size(); i++)
	{
		for (auto j = 0U; j < str2.size(); j++)
		{
			if (str1[i] == str2[j])
			{
				str1.erase(i, 1);
			}
		}
	}
	return str1;
}
int main()
{
	std::string str1 = "geeksforgeeks";
	std::string str2 = "mask";
	std::cout << "remove chars from <" << str1 << "> " << "present in <" << str2 << ">" << removechars(str1, str2) << std::endl;
	return 0;
}
