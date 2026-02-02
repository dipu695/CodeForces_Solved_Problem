#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(a.begin(), a.end());

    int Min = a[n - 1] - a[1];
    int Max = a[n - 2] - a[0];

    cout << min(Min, Max) << endl;

    return 0;
}