#include <iostream>
#include <string>

int getNumberOfMessagesCorrupted(std::string str)
{
    int loss_msg = 0;
    std::string temp = "";
    std::cout << "String received from MARS: " << str << std::endl;
    for (auto i = 0; i < str.size(); i += 3)
    {
        if (str[i] != 'S')
        {
            loss_msg++;
        }

        if (str[i + 1] != 'O')
        {
            loss_msg++;
        }

        if (str[i + 2] != 'S')
        {
            loss_msg++;
        }
    }

    return loss_msg;
}

int main()
{
    
    std::string str = "SOSSPSSQSSOR";
    std::cout << "Number of SOS messages corrupted by radiation: " << getNumberOfMessagesCorrupted(str) << std::endl;

    str = "SOSSOT";
    std::cout << "Number of SOS messages corrupted by radiation: " << getNumberOfMessagesCorrupted(str) << std::endl;

    str = "SOSSPSSQSSOR";
    std::cout << "Number of SOS messages corrupted by radiation: " << getNumberOfMessagesCorrupted(str) << std::endl;
    
    str = "SOSOOSOSOSOSOSSOSOSOSOSOSOS";
    std::cout << "Number of SOS messages corrupted by radiation: " << getNumberOfMessagesCorrupted(str) << std::endl;

    str = "OOSDSSOSOSWEWSOSOSOSOSOSOSSSSOSOSOSS";
    std::cout << "Number of SOS messages corrupted by radiation: " << getNumberOfMessagesCorrupted(str) << std::endl;

    return 0;
}
