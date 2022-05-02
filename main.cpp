#include <iostream>
#include "rocket.h"



int main(void) 
{
    rocket theRocket(10);

    while (!theRocket.isRocketTail())
    {
        std::string row = theRocket.getNextRow();
        std::cout << row <<std::endl;
    }
	std::cout << "Blau Ring Labs rules!" <<std::endl;
	return 0;
}
