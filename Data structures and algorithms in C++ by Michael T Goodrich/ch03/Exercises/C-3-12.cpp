/*  C-3.12
    In the Towers of Hanoi puzzle, we are given a platform with three pegs, a, 
    b, and c, sticking out of it. On peg a is a stack of n disks, each larger 
    than the next, so that the smallest is on the top and the largest is on the 
    bottom. The puzzle is to move all the disks from peg a to peg c, moving one 
    disk at a time, so that we never place a larger disk on top of a smaller 
    one.
    Describe a recursive algorithm for solving the Towers of Hanoi puzzle for 
    arbitrary n.

    (Hint: Consider first the subproblem of moving all but the nth disk from
    peg a to another peg using the third as “temporary storage.”)
 */

/*  The minimal number of moves required to solve a Tower of Hanoi puzzle is 
    2n − 1, where n is the number of disks. 
 */

#include <cmath>
using std::pow;

#include <iostream>
using std::cout;

#include <vector>
using std::vector;

class TowersOfHanoi
{
private:
    int numOfDisks;
    vector<int> A, B, C;
    int numOfMoves = 0;

    void moveOneDisk(vector<int> &source, vector<int> &destination)
    {
        destination.push_back(source.back());
        source.pop_back();
        numOfMoves++;
        printTowers();
    }

    void solve(int numOfDisks,
               vector<int> &source,
               vector<int> &destination,
               vector<int> &auxillary)
    {
        if (numOfDisks == 1)
        {
            moveOneDisk(source, destination);
        }
        else
        {
            solve(numOfDisks - 1, source, auxillary, destination);
            moveOneDisk(source, destination);
            solve(numOfDisks - 1, auxillary, destination, source);
        }
    }

public:
    TowersOfHanoi(int n) : numOfDisks(n)
    {
        for (int i = numOfDisks; i >= 1; i--)
        {
            A.push_back(i);
        }
        printTowers();
    }

    void solve()
    {
        solve(numOfDisks, A, C, B);
    }

    void printTowers()
    {
        cout << "Move #" << numOfMoves << "\n";
        cout << "A: ";
        for (int i = 0; i < A.size(); i++)
        {
            cout << A.at(i) << " ";
        }
        cout << "\n";

        cout << "B: ";
        for (int i = 0; i < B.size(); i++)
        {
            cout << B.at(i) << " ";
        }
        cout << "\n";

        cout << "C: ";
        for (int i = 0; i < C.size(); i++)
        {
            cout << C.at(i) << " ";
        }
        cout << "\n\n";
    }
};

int main()
{
    TowersOfHanoi toh(4);
    toh.solve();
}