
//DAY 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , x;
        cin >> n >> x;

        vector < long long > arr;
        arr.push_back(0);

        for(int i = 0 ; i < n ; i++)
        {
            long long pt;
            cin >> pt;
            arr.push_back(pt);
        }

        arr.push_back(x);
        n = arr.size();

        long long max_dis = INT_MIN;

        for(int i = 0 ; i < n ; i++)
        {
            if(i == n - 1)
            {
                max_dis = max(max_dis , 2 * (arr[i] - arr[i - 1]));

            }
            else
            {
                max_dis = max(max_dis , (arr[i] - arr[i - 1]) );
            }
        }
        cout << max_dis << endl;
    }

    return 0;
}