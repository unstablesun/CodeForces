#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall arraystab.cpp -o arraystab

using namespace std;

int main()
{
    int n;
    int stabArray[100000];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        stabArray[i] = b;
    }

    int result = 0;

    int max = 0;
    int min = INT_MAX;
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (min > stabArray[i])
        {
            min = stabArray[i];
            minIndex = i;
        }
        if (max < stabArray[i])
        {
            max = stabArray[i];
            maxIndex = i;
        }
    }

    int max2 = 0;
    int min2 = INT_MAX;
    int minIndex2 = 0;
    int maxIndex2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (min2 > stabArray[i] && i != minIndex)
        {
            min2 = stabArray[i];
            minIndex2 = i;
        }
        if (max2 < stabArray[i] && i != maxIndex)
        {
            max2 = stabArray[i];
            maxIndex2 = i;
        }
    }

    //printf("%d %d %d %d\n", max, max2, min, min2);
    if (max - max2 > min2 - min)
    {
        result = max2 - min;
    }
    else
    {
        result = max - min2;
    }

    cout << result << "\n";
}