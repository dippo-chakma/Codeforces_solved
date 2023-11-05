#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;

    int y[5] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        x += n / y[i];
        n = n % y[i];
    }
    cout << x << endl;

    return 0;
}