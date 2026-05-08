#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long>arr(n);
        for(long long i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        long long total_and = arr[0];
        for(long long i = 1 ; i < n ; i++)
        {
            total_and &= arr[i];
        }
        cout << total_and << endl;
    }
    return 0;
}