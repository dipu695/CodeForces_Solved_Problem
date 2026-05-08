#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        int ans = min(cnt0 , cnt1);
        if(ans % 2 != 0)
        {
            cout <<"DA"<<endl;
        }else{
            cout <<"NET\n";
        }
    }
    return 0;
}