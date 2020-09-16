#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall supersort.cpp -o supersort

using namespace std;

void printArray(vector<int> _sortArray)
{
    int size = _sortArray.size();

    printf("\n-start-\n");
    for (int i = 0; i < size; i++)
    {
        cout << _sortArray[i] << " ";
    }
    printf("\n-end-\n");
}

int main()
{
    int n, k;

    printf("supersort\n");

    cin >> n >> k;
    printf("n=%d k=%d\n\n", n, k);

    vector<int> sortArray;

    sortArray.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int r = rand() % k;
        sortArray.push_back(r);
    }

    printArray(sortArray);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (sortArray[j] > sortArray[j + 1])
            {
                int swap = sortArray[j];
                sortArray[j] = sortArray[j + 1];
                sortArray[j + 1] = swap;
            }
        }
    }

    printArray(sortArray);
}