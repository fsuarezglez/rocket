#include "rocket.h"

rocket::rocket(const int &numLevels):
    levels(numLevels),
    currentLevel(0)
{

}

void rocket::init(const int &numLevels)
{
    levels = numLevels;
    currentLevel = 0;
}

std::string rocket::getNextRow()
{
    std::string str;
    if (isRocketTail())
        return str;

    if (currentLevel == 0)
    {
        // Inset spike

    }
    else if (currentLevel == levels +1)
    {
        // Insert the tail
    }
    else
    {
        // Insert any other row

        // Blanks at the beginning
        for (int i=0; (i< levels - currentLevel); i++)
        {
            str.push_back(' ');
        }

        // X in the middle
        for (int i=0; (i< 2*currentLevel-1); i++)
        {
            str.push_back(ROCKETCHAR);
        }

        // Blanks at the end
        for (int i=0; (i< levels - currentLevel); i++)
        {
            str.push_back(' ');
        }

    }




    currentLevel++;
    return str;
}

bool rocket::isRocketTail()
{
    return (currentLevel == (levels+1) ? true : false);
}
