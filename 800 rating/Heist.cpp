#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long mn = *min_element(a.begin(), a.end());
    long long mx = *max_element(a.begin(), a.end());

    long long stolen = (mx - mn + 1) - n;
    cout << stolen << endl;

    return 0;
}
