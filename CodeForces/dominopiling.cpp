#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++14 -O2 -Wall dominopiling.cpp -o dominopiling

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int s = 0;
    if (m < 2 && n < 2)
    {
        s = 0;
    }
    else if (m == 1)
    {
        s = n / 2;
    }
    else if (n == 1)
    {
        s = m / 2;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            s += m;
        }

        if (n % 2 == 1)
        {
            s += m / 2;
        }
    }

    cout << "\n"
         << s;
}