#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
       long long n;
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << 1 << endl;
        }
        else if (n == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << (n + 2) / 3 << endl;
        }
    }
    return 0;
}