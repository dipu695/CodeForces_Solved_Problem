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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mxIndex = 0;
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] > arr[mxIndex])
            mxIndex = i;
        }
        swap(arr[0] , arr[mxIndex]);
        long long ans = 0;
        int mx = arr[0];
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, arr[i]);
            ans += mx;
        }
        cout << ans << endl;
    }

    return 0;
}