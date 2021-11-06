#include "Scores.hpp"
#include <stdexcept>
#include <iostream>

Scores::Scores(int maxEnt)
{
    maxEntries = maxEnt;
    numEntries = 0;
    entries = new GameEntry[maxEntries];
}

Scores::~Scores()
{
    delete[] entries;
}

void Scores::add(const GameEntry &e)
{
    int newScore = e.getScore();

    // check if array is full
    if (numEntries == maxEntries)
    {
        if (entries[maxEntries - 1].getScore() >= newScore)
        {
            return;
        }
    }
    else
    {
        numEntries++;
        int i = numEntries - 2;
        while (i >= 0 && newScore > entries[i].getScore())
        {
            entries[i + 1] = entries[i];
            i--;
        }
        entries[i + 1] = e;
    }
}

GameEntry Scores::remove(int i)
{
    if ((i < 0) || (i >= numEntries))
    {
        throw std::out_of_range("Invalid index");
    }

    GameEntry e = entries[i];

    for (int j = i + 1; j < numEntries; j++)
    {
        entries[j - 1] = entries[j];
    }
    numEntries--;

    return e;
}

void Scores::printScores()
{
    for (int i = 0; i < numEntries; i++)
    {
        std::cout << entries[i].getName() << ": " << entries[i].getScore() << std::endl;
    }
}