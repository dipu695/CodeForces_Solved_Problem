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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector < int > vec;
        int min_price = INT_MAX;

        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] > min_price)
            {
               vec.push_back(i + 1); 
            }
            min_price = min(min_price , a[i]);
        }

        cout << vec.size() <<"\n";
        if(!vec.empty())
        {
            for(int x : vec)
            {
                cout << x << " ";
            }
            cout <<"\n";
        }
    }

    return 0;
}