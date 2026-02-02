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
        int cnt0 = 0;
        int cnt1 = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                cnt1++;
            }
            if (arr[i] == 0)
            {
                cnt0++;
            }
        }
        if(cnt0 % 2 == 1)
        {
            cout << "Alice" << endl;
        }
        else if (n % 2 == 1)
        {
            cout << "Alice" << endl;
        }
        else 
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}