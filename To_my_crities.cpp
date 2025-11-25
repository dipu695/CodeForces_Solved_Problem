#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        int s1 = a + b;
        int s2 = b + c;
        int s3 = c + a;
        if(s1 >= 10 || s2 >= 10 || s3 >= 10)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}