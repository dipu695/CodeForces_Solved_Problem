#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < long long > arr(n);
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        int found = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(__gcd(arr[i] , arr[j]) <= 2){
                    found = 1;
                }
            }
        }

        (found == true) ? cout <<"YES\n" : cout << "NO\n";
    }
    
    return 0;
}