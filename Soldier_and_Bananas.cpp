#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k , n , w;

    cin >> k >> n >> w;

    int total_cost = 0;

    for(int i = 1 ; i <= w ; i++)
    {
        total_cost = total_cost + (i * k);

    }

    if(total_cost > n)
    {
        cout << (total_cost - n) << endl;
    }
    else 
    {
        cout << "0" << endl;
    }
    return 0;
}