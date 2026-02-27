#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long arr[n];

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        long long posi_cnt = 0;
        long long neg_cnt = 0;

        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 1){
                posi_cnt++;
            }else{
                neg_cnt++;
            }
        }

        long long op = 0;
        while(posi_cnt < neg_cnt || neg_cnt % 2 == 1){
            op++;
            posi_cnt++;
            neg_cnt--;
        }

        cout << op << endl;

    }
    return 0;
}
