#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        if (sum1 == sum2)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    } 

    return 0;
}
