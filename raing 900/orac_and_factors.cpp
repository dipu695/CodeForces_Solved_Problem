#include<bits/stdc++.h>

using namespace std;

int SmallDiv(int n)
{
    for(int i = 2 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , k;
        cin >> n >> k;

        if(n % 2 == 0)
        {
            n += 2 * k;
        }
        else 
        {
            int d = SmallDiv(n);

            n += d;
            k--;

            n += 2 * k ;
        }
         cout << n << endl;
    }

   return 0;

}