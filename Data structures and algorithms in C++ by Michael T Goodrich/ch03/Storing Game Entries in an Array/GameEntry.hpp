#include <string>
using std::string;

#ifndef GAME_ENTRY_HPP
#define GAME_ENTRY_HPP
class GameEntry
{
private:
    string name;
    int score;

public:
    GameEntry(const string &n = "", int s = 0);
    string getName() const;
    int getScore() const;
};
#endif