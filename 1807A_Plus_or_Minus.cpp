#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+\n";
        }
        else
        {
            cout << "-\n";
        }
    }

    return 0;
}