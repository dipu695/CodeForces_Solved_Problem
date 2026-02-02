#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x ;
    cin >> x;
    while ( x--)
    {
        long long y , z;
        cin >> y >> z;

        if(y % z == 0)
        {
            cout << 0 <<endl;
        }
        else
        {
            long long rem = y % z;

            cout << z - rem << endl;
        }
    }
    
    return 0;
}