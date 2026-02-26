#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s1[8];
   
        for(int i = 0 ; i < 8 ; i++){
            cin >> s1[i];
        }
         string s2 ="";
        for(int i = 0 ; i < 8 ; i++){

                 for(int j = 0 ; j < 8 ; j++){
                    if(s1[i][j] != '.'){
                        s2 += s1[i][j];
                    }
                 }
        }
        cout << s2 << endl;
    }
    
}