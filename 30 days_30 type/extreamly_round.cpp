#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        int digitd = s.length();
        int first_digit = s[0] - '0';

        cout << 9*(digitd - 1) + first_digit << endl;
    }
    
    return 0;
}