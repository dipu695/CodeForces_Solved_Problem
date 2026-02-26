#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;
    vector<long long> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    //int mn = arr[0];
    long long min_Ope = LLONG_MAX;
    for(int i = 0 ; i < n ; i++){
        min_Ope = min(min_Ope , llabs(arr[i]));
    }
    cout << min_Ope << endl;
    return 0;
}