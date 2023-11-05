#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "codeforces";

    char a;
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        bool b = false;
        for (auto i : s)
        {
            if (a == i)
            {
                b = true;
                break;
            }
        }
        if (b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}