#ifndef JUMBLEGAME_H
#define JUMBLEGAME_H

#include <iostream>

class JumbleGame
{
    std::string word;
    std::string hint;
public:
    JumbleGame(std::string, std::string);
    const std::string randWord();
    const std::string getWord();
    const std::string getHelp();
    void welcome();
    void goodBye();
};

#endif // JUMBLEGAME_H
