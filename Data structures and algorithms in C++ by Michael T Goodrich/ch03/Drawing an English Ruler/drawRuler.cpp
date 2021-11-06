#include <iostream>
using namespace std;

// one tick with optional label
void drawOneTick(int tickLength, int tickLabel = -1)
{
    for (int i = 0; i < tickLength; i++)
    {
        cout << "-";
    }
    if (tickLabel >= 0)
    {
        cout << " " << tickLabel;
    }
    cout << "\n";
}

// draws ticks of given length
void drawTicks(int tickLength)
{
    if (tickLength > 0)
    {
        drawTicks(tickLength - 1);
        drawOneTick(tickLength);
        drawTicks(tickLength - 1);
    }
}

// draw the entire ruler
void drawRuler(int nInches, int majorLength)
{
    drawOneTick(majorLength, 0);
    for (int i = 1; i <= nInches; i++)
    {
        drawTicks(majorLength - 1);
        drawOneTick(majorLength, i);
    }
}

int main()
{
    cout << "A 2-inch ruler with major tick length 4\n";
    drawRuler(2, 4);
    cout << "\n\n";

    cout << "A 1-inch ruler with major tick length 5\n";
    drawRuler(1, 5);
    cout << "\n\n";

    cout << "A 3-inch ruler with major tick length 3\n";
    drawRuler(3, 3);
    cout << "\n\n";
}