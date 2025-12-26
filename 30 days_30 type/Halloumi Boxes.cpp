//DAY 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool srt = true;
            for(int i = 0 ; i < n - 1 ; i++)
            {
                if(arr[i] > arr[i+1])
                {
                    srt = false;
                    break;
                }
            }
            cout << (srt ? "YES" : "NO") << endl;
        }
    }

    return 0;
}