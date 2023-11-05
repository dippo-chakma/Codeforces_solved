    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int a;
        cin>>a;
     
        for (int i = 0; i < a; i++)
        {
            string str;
            cin >> str;
     
            int we = str.length();
     
            if (we <= 10)
            {
                cout << str <<endl;
            }
            else
            {
                cout << str[0] << we - 2 << str[we - 1]<<endl;
            }
        }
        return 0;
    }