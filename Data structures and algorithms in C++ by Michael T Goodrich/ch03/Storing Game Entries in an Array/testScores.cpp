#include "Scores.hpp"

int main()
{
    Scores s = Scores();
    string names[] = {"Belle", "Samson", "Cooper", "Brutus", "Daisy"};
    for (int i = 1; i <= 5; i++)
    {
        s.add(GameEntry(names[i - 1], i * 100));
    }
    s.printScores();
}