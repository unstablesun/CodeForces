#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall prettymatrix.cpp -o prettymatrix

using namespace std;

int main()
{
    int matrixArray[5][5];

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            int b;
            cin >> b;
            matrixArray[i][j] = b;
        }
    }

    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrixArray[i][j] == 1)
            {
                x = j;
                y = i;
            }
        }
    }

    int dx = (abs(x - 2));
    int dy = (abs(y - 2));

    int value = dx + dy;

    cout << value << "\n";
}
