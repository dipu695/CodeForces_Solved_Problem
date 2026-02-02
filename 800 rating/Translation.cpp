#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s , s_2;
    cin >> s;
    cin >> s_2;
    // string s_2(s); // copy string using copy constructor----
     reverse(s_2.begin(), s_2.end());//from algorithm library---
     
    if ( s == s_2)

    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
