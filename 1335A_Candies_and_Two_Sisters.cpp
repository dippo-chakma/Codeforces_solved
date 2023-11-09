#include <bits/stdc++.h>
using namespace std;

int main()
{

    double t, n = 0;
    int x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        x = ceil((n / 2) - 1);
        cout << x << endl;
    }

    return 0;
}