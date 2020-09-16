#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall removesmallest.cpp -o removesmallest

using namespace std;

int main()
{
    int t, n, value;

    vector<vector<int>> vec(1000, vector<int>(0, 0));

    const int maxLen = 50;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> value;
            vec[i].push_back(value);
        }
    }

    for (int i = 0; i < t; i++)
    {
        int count = vec[i].size();
        //printf("count = %d\n", (int)count);

        if (count == 1)
        {
            cout << "YES"
                 << "\n";
            continue;
        }
        else if (count == 2)
        {
            if (abs(vec[i][0] - vec[i][1]) < 2)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";

            continue;
        }

        //sort
        for (int s = 0; s < count; s++)
        {
            for (int c = 0; c < count - 1; c++)
            {
                if (vec[i][c] < vec[i][c + 1])
                {
                    int swap = vec[i][c + 1];
                    vec[i][c + 1] = vec[i][c];
                    vec[i][c] = swap;
                }
            }
        }

        bool fail = false;
        for (int s = 0; s < count - 1; s++)
        {
            if (abs(vec[i][s] - vec[i][s + 1]) >= 2)
            {
                cout << "NO"
                     << "\n";

                fail = true;
                break;
            }
        }
        if (fail == false)
        {
            cout << "YES"
                 << "\n";
        }
        /*
        int min = vec[i][0];
        int max = vec[i][0];
        for (int k = 1; k < count; k++)
        {
            if (min < vec[i][k])
                min = vec[i][k];

            if (max > vec[i][k])
                max = vec[i][k];
        }
        int diff = max - min;

        if (diff > count)
        {
            cout << "NO";
            continue;
        }
        else
        {
            cout << "YES";
        }

*/
        /*
        int release = 0;
        int releaseMax = maxLen * maxLen;
        while (count > 1)
        {
            int rj1 = rand() % count;
            int rj2 = rand() % count;

            while (rj1 == rj2)
            {
                rj2 = rand() % count;
            }

            printf("r1 = %d r2 = %d\n", rj1, rj2);

            if (abs(vec[i][rj1] - vec[i][rj2]) <= 1)
            {
                vec[i].erase(vec[i].begin() + rj1);
                printf("ERASE %d\n", rj1);
            }

            count = vec[i].size();
            printf("new count = %d\n", count);

            if (count == 2)
            {
                if (abs(vec[i][0] - vec[i][1]) <= 1)
                {
                    vec[i].erase(vec[i].begin());
                    printf("LAST ERASE %d\n", 0);
                }
                else
                {
                    release = releaseMax;
                }
            }

            if (++release > releaseMax)
            {
                break;
            }
        }
        if (count == 1)
            cout << "YES";
        else
            cout << "NO";
*/
    }
}