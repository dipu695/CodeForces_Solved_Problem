#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        vector < int > arr(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin() , arr.end());

        int st = 0 ;
        int bst = 1;
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] - arr[i - 1] > k){
                st = i;
            }
            bst = max(bst , i - st + 1);
        }

        cout << n - bst << endl;

        
    }
    return 0;
}