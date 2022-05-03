#ifndef ROCKET_H
#define ROCKET_H

#include <string>

class rocket
{
public:
    rocket(const int &numLevels, const bool &inverted=false);

    std::string getNextRow();
    bool isRocketTail();

private:
    int levels;
    int currentLevel;
    bool rocketInverted;
    int rowIncrement;

private:
    // Private consts
    const char SPIKE= '|';
    const char ROCKETCHAR = 'X';



};

#endif // ROCKET_H
