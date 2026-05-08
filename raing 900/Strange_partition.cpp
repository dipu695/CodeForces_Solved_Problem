#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        long long max = 0, min = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            max += ceil(v[i] * 1.0 / x);
            min += v[i];
        }
        min = ceil(min * 1.0 / x);
        cout << min << " " << max << endl;
        ;
    }
    return 0;
}