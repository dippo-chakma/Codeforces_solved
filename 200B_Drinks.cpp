#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(12);
    double t, a, sum = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        sum = sum + a;
    }

    cout << sum / t << endl;

    return 0;
}