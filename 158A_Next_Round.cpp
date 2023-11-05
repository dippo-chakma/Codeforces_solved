#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k, count = 0;
    cin >> n >> k;

    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] > 0)
        {
            if (p[k - 1] <= p[i])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}