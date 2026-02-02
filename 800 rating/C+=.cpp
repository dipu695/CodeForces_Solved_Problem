#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b , n;
        cin >> a >> b >> n;
        int step = 0;
        while (a <= n and b <= n)
        {
            if(a < b)
            {
                a+=b;
            }
            else
            {
                b += a;
            }
            step++;
        }
          cout << step << endl;
    }
  
    return 0;
}