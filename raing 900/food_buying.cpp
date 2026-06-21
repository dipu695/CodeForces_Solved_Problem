#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int total = 0;
        while(s >= 10)
        {
            int spend = (s/10)*10;
            total+=spend;
            s = s%10+spend/10;
        }
                    total += s;
        cout << total << endl; 
    }
    return 0;
}