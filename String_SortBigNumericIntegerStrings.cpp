#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool comp(const std::string& left, const std::string& right)
{
    // if length of both string are equals then sort
    // them in lexicographically order
    if (left.size() == right.size())
    {
        return left < right;
    }
    else
    {
        return left.size() < right.size();
    }
}

std::vector<std::string> getSortedArray(std::vector<std::string> unsortedArray)
{
    std::sort(unsortedArray.begin(), unsortedArray.end(), comp);
    return unsortedArray;
}

int main()
{    
    std::vector<std::string> unsortedArray{"1", "200", "150", "3"};
    std::vector<std::string> sortedArray = getSortedArray(unsortedArray);

    for (auto x : sortedArray)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

