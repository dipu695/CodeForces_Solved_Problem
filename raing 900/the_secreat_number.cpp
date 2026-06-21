#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        vector < long long > ans;

        long long pow = 10;

        for(int i = 1; i <= 18 ; i++)
        {
            long long div = 1 + pow;

            if(div > n)break;

            if(n % div == 0)
            {
                ans.push_back(n / div);

            }

            pow *= 10;
        }

        sort(ans.begin() , ans.end());

        if(ans.empty()){
            cout << 0 << "\n";
        }
        else{
            cout << ans.size() << "\n";
            for(long long x : ans)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}