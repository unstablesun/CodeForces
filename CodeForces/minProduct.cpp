#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++14 -O2 -Wall ateam.cpp -o ateam

using namespace std;

int main()
{
    int t, a, b, x, y, n;

    int inputArray[20000][5];

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> x >> y >> n;

        inputArray[i][0] = a;
        inputArray[i][1] = b;
        inputArray[i][2] = x;
        inputArray[i][3] = y;
        inputArray[i][4] = n;
    }

    for (int i = 0; i < t; i++)
    {
        int diff, tens, remainder, minProd;
        diff = tens = remainder = minProd = 0;

        a = inputArray[i][0];
        b = inputArray[i][1];
        x = inputArray[i][2];
        y = inputArray[i][3];
        n = inputArray[i][4];

        if (a > x && b > y)
        {
            int diff = a - x;
            if (b - y >= diff)
            {
            }
            else
            {
                        }
        }

        cout << minProd << "\n";
    }
}