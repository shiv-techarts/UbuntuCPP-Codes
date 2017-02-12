#ifndef HANGMAN_H
#define HANGMAN_H

#include <iostream>
#include <vector>

class HangMan {
    std::string word;
    int guess;
    std::vector<std::string> hmVector;
    std::vector<std::string> userVector;
public:
    HangMan();
    ~HangMan();
    int getGuess();
    void setGuess();
    void decrementGuess();
    void hmDatabase();
    void usedWords();
    void clearUsedWords();
    bool gameStart(std::string, std::string);
    std::string wordRand();
    void welcome();
    void help();
    void goodBye();
};

#endif // HANGMAN_H
