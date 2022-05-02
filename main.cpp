#include <iostream>
#include "rocket.h"

bool check_number(std::string str)
{
    for (char const &c: str)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[])
{
    if(argc < 3)
        return -1;

    std::string arg1 = std::string(argv[1]);
    if (arg1 != "-l")
        return -1;

    std::string arg2 = std::string(argv[2]);
    if (!check_number(arg2))
        return -1;

    int levels = std::stoi(arg2);

    rocket theRocket(levels);

    while (!theRocket.isRocketTail())
    {
        std::string row = theRocket.getNextRow();
        std::cout << row <<std::endl;
    }

	return 0;
}
