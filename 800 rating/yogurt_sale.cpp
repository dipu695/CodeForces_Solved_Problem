#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n , a , b;
        cin >> n >> a >> b;

        int na = (n * a);
         if(n == 1){
            cout << a << endl;
            continue;
        }
        if(n >= 2){
            int x = n / 2;
            int y = n % 2;
            int add = x*b + y*a;
            cout << min(na , add) << endl;
          }
        
        
       


    }
    
    return 0;
}