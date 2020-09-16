#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall fibonacci.cpp -o hello

using namespace std;

int main()
{
    int n;

    printf("fibonacci\n");
    int f1 = 0;
    int f2 = 1;

    cin >> n;

    printf("n = %d\n", n);
    printf("%d %d ", f1, f2);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int f3 = f2 + f1;
        if (f3 > 4000000)
            break;

        if (f3 % 2 == 0)
            sum += f3;

        f1 = f2;
        f2 = f3;
        printf("%d ", f3);
    }
    printf("\nsum = %d ", sum);

    printf("\n\n");
}