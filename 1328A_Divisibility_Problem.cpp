#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    long long a, b;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0\n";
            continue;
        }
        x = a / b;
        y = (x + 1) * b;
        cout << y - a << endl;
    }

    return 0;
}