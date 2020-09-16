#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall sumformulas.cpp -o hello

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    printf("n=%d k=%d\n\n", n, k);

    int sumX = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int sqr = pow(i, k);
        printf("%d : ", sqr);
        sumX += sqr;
    }

    printf("\n\nsumX = %d\n\n", sumX);

    int valX = 0;
    if (k == 2)
    {
        int c1 = n * (n + 1);
        int c2 = 2 * n + 1;
        valX = c1 * c2 / 6;
    }
    else
    {
        valX = (n * (n + 1)) / 2;
    }

    printf("valX = %d\n\n", valX);
}