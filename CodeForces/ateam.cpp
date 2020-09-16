#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++14 -O2 -Wall ateam.cpp -o ateam

using namespace std;

int main()
{
    int n;
    vector<int> a;

    cin >> n;

    a.reserve(n * 3); // 3 friends, fixed

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }

    int s = 0;
    for (int i = 0; i < n * 3; i += 3)
    {
        if ((a[i] + a[i + 1] + a[i + 2]) > 1)
            s++;
    }

    cout << "\n"
         << s;
}