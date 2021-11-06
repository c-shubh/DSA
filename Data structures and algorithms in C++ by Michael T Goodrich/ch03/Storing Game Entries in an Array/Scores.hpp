#ifndef SCORES_HPP
#define SCORES_HPP

#include "GameEntry.hpp"

class Scores
{
private:
    int maxEntries;
    int numEntries;
    GameEntry *entries;

public:
    Scores(int maxEnt = 10);
    ~Scores();

    void add(const GameEntry &e);
    GameEntry remove(int i);
    void printScores();
};

#endif