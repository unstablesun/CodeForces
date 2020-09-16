#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall watermelon.cpp -o watermelon

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 2 == 0 && n != 2)
        cout << "YES";
    else
        cout << "NO";
}