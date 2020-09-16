#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++14 -O2 -Wall TwoInts.cpp -o ateam

using namespace std;

int main()
{
    int t, a, b;

    int inputArray[20000][2];

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        inputArray[i][0] = a;
        inputArray[i][1] = b;
    }

    for (int i = 0; i < t; i++)
    {
        int diff, tens, remainder, moves;
        diff = tens = remainder = moves = 0;
        a = inputArray[i][0];
        b = inputArray[i][1];

        diff = abs(b - a);

        if (diff >= 10)
        {
            tens = diff / 10;
        }
        remainder = diff % 10;

        moves = tens;
        if (remainder > 0)
            moves++;

        cout << moves << "\n";
    }
}