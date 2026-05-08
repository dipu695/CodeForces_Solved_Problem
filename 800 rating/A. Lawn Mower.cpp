#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, w;
        cin >> n >> w;

        if (w == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        if (w > n)
        {
            cout << n << "\n";
            continue;
        }
        long long num = n - w + 1;
        long long k = (n + w - 1) / w;
        cout << n - k << "\n";
    }
    return 0;
}