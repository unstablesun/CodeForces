#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall NextRound.cpp -o nextround

using namespace std;

int main()
{
    int n, k, s;

    printf("nextround\n");
    cin >> n >> k;
    printf("%d %d \n", n, k);

    vector<int> scores;
    scores.reserve(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        scores.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", scores[i]);
    }

    printf("\n\n");
}