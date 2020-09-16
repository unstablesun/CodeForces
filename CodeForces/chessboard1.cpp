#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall chesboard1.cpp -o chesboard1

using namespace std;

int main()
{
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    int cboard[100][100] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cboard[n][m] = 0;
        }
    }

    cboard[x][y] = 1;

    
    int r = rand() % 100;
}