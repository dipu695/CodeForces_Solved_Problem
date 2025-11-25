#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a , b ,c , s;
        cin >> a >> b >> c;
        s = a + b;
        if(s == c)
        {
            cout << "+" <<  endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
    return 0;
}