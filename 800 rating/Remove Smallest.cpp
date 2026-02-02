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
        vector<int> a(n);
        bool f = false;
        for (int i = 0; i < n; i++)
        {
          cin >> a[i];
        }
        sort(a.begin() , a.end());

        for(int i = 0 ; i < n - 1 ; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                f = true;
                break;
            }
        }
        if(f == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}