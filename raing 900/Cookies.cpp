#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);

    int cnt = 0;
    for(int i = 0 ;  i < n ; i++)
    {
        cin >> a[i];
        cnt+=a[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if((cnt - a[i]) % 2 == 0){
            ans++;
        }
    }
    cout << ans <<"\n";
    return 0;
}