#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector < int > a(n);

        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }

        int totalTwo = 0;
        for(int x : a)
        {
            if(x == 2) totalTwo++;

        }

        if(totalTwo % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int need = totalTwo / 2;
        int cnt = 0;

        for(int i = 0 ; i < n - 1 ; i++)
        {
            if(a[i] == 2)cnt++;
            if(cnt == need){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}