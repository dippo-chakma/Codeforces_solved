#include <bits/stdc++.h>
using namespace std;

int main()
{

    string j, k;
    cin >> j;

    int size = j.size();
    for (int i = 0; i < size; i++)
    {
        if (j[i] == '.')
        {
            k += "0";
        }
        else if (j[i] == '-' && j[i + 1] == '.')
        {
            k += "1";
            i++;
        }
        else if (j[i] == '-' && j[i + 1] == '-')
        {
            k += "2";
            i++;
        }
    }
    cout << k;

    return 0;
}