#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector < int > freque(26 , 0);
        for(int i = 0 ; i < n ; i++){
            freque[s[i] - 'a']++;
        }

        long long odd_freque = 0;
        for(int i = 0 ; i < 26 ; i++){
            odd_freque+=freque[i] % 2;
        }

        if(odd_freque > k + 1){
            cout << "NO" << endl;
        }else{
            cout <<"YES" << endl;
        }
    }
    return 0;
}