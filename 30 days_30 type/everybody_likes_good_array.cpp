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
        int oper_cnt = 0;
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            if((arr[i] % 2) == arr[i+1] % 2){
                oper_cnt ++;
            }
        }
        cout << oper_cnt << endl;
    }
    
    return 0;
}