#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long d , pos;
    cin >> d >> pos;
    // vector < int > odd , even;


    // for(int i = 1 ; i <= d ; i++){
           
    //     if(i % 2 == 1){
    //         odd.push_back(i);
    //     }else{
    //         even.push_back(i);
    //     }
           
    // }
    
    // odd.insert(odd.end(), even.begin() , even.end());
    // if(pos >= 1 and pos <= odd.size()){
    //     cout << odd[pos - 1] << endl;
    // }

    long long oddCnt = (d + 1)/2;
    if(pos <= oddCnt){
        cout << 2 * pos - 1 << endl;
    }else{
        long long k = pos - oddCnt;
        cout << 2 * k << endl;
    }
    return 0;

}