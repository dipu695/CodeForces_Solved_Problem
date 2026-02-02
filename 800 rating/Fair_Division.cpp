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

        vector<int> arr(n);
        int ones = 0, twos = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] == 1)
                ones++;
            else
                twos++;
        }

        if (sum % 2 != 0)
        {
            cout << "NO\n"; // total odd → impossible
        }
        else
        {
            int half = sum / 2;
            if (half % 2 != 0 && ones == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}