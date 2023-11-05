#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = towlower(a[i]);
            b[i] = towlower(b[i]);
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (a[i] > b[i])
            {
                cout << "1\n";
                return 0;
            }

            if (a[i] < b[i])
            {
                cout << "-1\n";
                return 0;
            }
        }
        cout << "0\n";
    }

    return 0;
}