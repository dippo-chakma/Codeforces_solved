#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (s.size() % 2)
        {
            cout << "NO\n";
            continue;
        }
        int x = s.size() / 2;
        bool y = true;
        for (int i = 0; i < x; i++)
        {
            if (s[i] != s[x + i])
            {
                y = false;
                break;
            }
        }
        cout << (y ? "YES" : "NO") << endl;
    }

    return 0;
}