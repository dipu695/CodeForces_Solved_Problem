#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , y , r;

        cin >> n;
        cin >> y >> r;

        int ye = y/2;

        cout <<min(ye+r , n) << endl;
    }
    return 0;
}