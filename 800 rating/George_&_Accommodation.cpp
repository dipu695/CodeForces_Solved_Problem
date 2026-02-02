#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int p , q;
    int cnt = 0;
    for(int i = 0 ; i < t ; i++)
    {
        cin >> p >> q;
        if(q - p >= 2)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}