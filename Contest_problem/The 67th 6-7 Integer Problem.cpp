#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[7];
        for(int i = 0 ; i < 7 ; i++)
        {
            cin >> a[i];
        }

        int maxIdx = max_element(a , a+7) - a;

        int sum = 0;
        for(int i = 0 ; i < 7 ; i++)
        {
            if(i == maxIdx)
            {
                sum += a[i];
            }
            else
            {
                sum += a[i]*-1;
            }
        }

        cout << sum << endl;
    }
    return 0;
}