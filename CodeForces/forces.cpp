#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// g++ -std=c++11 -O2 -Wall forces.cpp -o forces

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> forces;
    forces.reserve(n * 3);
    for (int i = 0; i < n * 3; i++)
    {
        int s;
        cin >> s;
        forces.push_back(s);
    }
    bool fail = false;
    for (int i = 0; i < 3; i++)
    {
        int force = 0;
        for (int j = 0; j < n * 3; j += 3)
        {
            force += forces[i + j];
        }

        if (force != 0)
        {
            cout << "NO"
                 << "\n";

            fail = true;
            break;
        }
    }

    if (fail == false)
        cout << "YES"
             << "\n";
}