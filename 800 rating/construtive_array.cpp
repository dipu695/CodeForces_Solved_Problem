#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>arr;
        int sml = 1;
        int lrg = n + 1;

        for(int i = 0 ; i < n ; i++)
        {
            if(i % 2 == 0)
            {
                arr.push_back(lrg++);
            }
            else
            {
                arr.push_back(sml++);
            }
        }
        for(int &x : arr)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}