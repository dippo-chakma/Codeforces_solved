#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;

    while (t--)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}