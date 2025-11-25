#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
         int sum  = 0;
         int d;
        while (m > 0)
        {
            
             d = m%10;
             m = m / 10;
           sum += d;
        }
        cout << sum << endl;
    }
    return 0;
}