#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        string s = to_string(n);//any to string 

        int len = s.length();
        int first = s[0] - '0';

        int ans = 9 * (len - 1);

        ans = ans + (first - 1);

        string rep = "";

        for(int i = 0 ; i < len ; i++)
        {
            rep = rep + s[0];
        }

        long long rep_num = stoll(rep);

        if(rep_num <= n)
        {
            ans = ans + 1;
        }

        cout << ans << endl;
    }
   return 0;

}