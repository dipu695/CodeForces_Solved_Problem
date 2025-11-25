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
        int C = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            if(x == 0)
            {
                C++;
                cnt = max(cnt , C);
            }
            else 
            {
                C = 0;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}