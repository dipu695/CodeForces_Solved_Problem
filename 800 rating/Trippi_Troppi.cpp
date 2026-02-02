#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' and (i == 0 or s[i - 1] == ' '))
            {
                cout << s[i] ;
            }

        }
        cout << endl;
    }

    return 0;
}