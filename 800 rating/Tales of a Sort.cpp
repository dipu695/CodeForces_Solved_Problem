#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = 0;
        long long prefMax = a[0];

        for (int j = 1; j < n; j++)
        {
            if (prefMax > a[j])
            {
                ans = max(ans, prefMax - a[j]);
            }
            prefMax = max(prefMax, a[j]);
        }

        cout << ans << '\n';
    }
    return 0;
}