#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall template.cpp -o template

using namespace std;

void primeFactors(long long n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (long long i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}
int main()
{

    int t = 1000;

    int n3 = t / 3;
    int n5 = t / 5;

    cout << "n3 " << n3 << "\n";
    cout << "n5 " << n5 << "\n";

    int sum = 0;
    for (int i = 1; i < n3; i++)
    {
        sum += 3 * i;
        cout << sum << " : ";
    }
    for (int i = 1; i < n5; i++)
    {
        sum += 5 * i;
    }

    int newSum = 0;
    int x = 3;
    while (x < 1000)
    {
        if (x % 5 != 0)
            newSum += x;

        x += 3;
    }
    cout << "x " << x << "\n";
    x = 5;
    while (x < 1000)
    {
        newSum += x;
        x += 5;
    }
    cout << "x " << x << "\n";

    cout << "\n";

    cout << "sum " << sum << "\n";
    cout << "newSum " << newSum << "\n";

    primeFactors(13195);

    long long big = 600851475143;
    primeFactors(big);
}
