#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long old_Sum = 0;
        for (int i = 0; i < n; i++)
        {
            old_Sum += arr[i];
        }

        vector<long long> prefix_Sum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix_Sum[i] = prefix_Sum[i - 1] + arr[i - 1];
        }

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long to_Remove = prefix_Sum[r] - prefix_Sum[l - 1];
            long long to_add = (r - l + 1) * k;
            long long total_Sum = old_Sum - to_Remove + to_add;

            if (total_Sum % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}