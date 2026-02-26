#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , b , d;
    cin >> n >> b >> d;

    int waste = 0 ;
    int empty = 0;

    for(int i = 0 ; i < n ; i ++){
        int sz;
        cin >> sz;


        if(sz <= b){
            waste += sz;
        }if(waste > d){
            empty++;
            waste = 0;
        }
    }

    cout << empty << endl;
    return 0;
}