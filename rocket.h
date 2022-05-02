#ifndef ROCKET_H
#define ROCKET_H

#include <string>

class rocket
{
public:
    rocket(const int &numLevels);

    void init(const int &numLevels);
    std::string getNextRow();
    bool isRocketTail();



private:
    int levels;
    int currentLevel;

private:
    // Private consts
    const char SPIKE= '|';
    const char ROCKETCHAR = 'X';



};

#endif // ROCKET_H
