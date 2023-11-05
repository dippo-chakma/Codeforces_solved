#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y += x;
    }

    if (y)
    {
        cout << "HARD\n";
    }
    else
    {
        cout << "EASY\n";
    }

    return 0;
}