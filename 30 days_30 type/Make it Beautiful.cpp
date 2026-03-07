#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        long long mx = arr[n - 1];
        long long mn = arr[0];

        if (mx == mn)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            cout << mx << " ";

            for (int i = 0; i < n - 1; i++)
            {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}