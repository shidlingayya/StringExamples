#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

std::string getReversedWordsInString(std::string myString)
{
    std::stack<std::string> words;
    std::string tempString;

    //This will convert given single string into multiple strings & store in the stack
    //It will be store in stack order - i->like->this->program->very->much
    for (auto i = 0U; i < myString.size(); i++)
    {
        if (myString[i] == '.')
        {
            std::cout << "Pushing:" << tempString <<std::endl;
            words.push(tempString);
            tempString = "";
        }
        else
        {
            tempString += myString[i];
        }
    }
    words.push(tempString); //Last string need to be accommodated other wise last string will be skipped

   //All the strings are present in stack now
    std::string readString = "";
    std::string intermediateString = " ";
    while (words.size() != 0)
    {
        intermediateString = words.top();
        std::reverse(intermediateString.begin(), intermediateString.end());
        readString += intermediateString;
        readString += ".";
        words.pop();
    }
    return readString;
}

int main()
{
    std::string myString = "i.like.this.program.very.much";
    std::cout << "My String " << myString << std::endl;
    std::cout << "Reversed words in string: " << getReversedWordsInString(myString) << std::endl;
    return 0;
}