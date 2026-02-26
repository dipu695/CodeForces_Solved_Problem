#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    
    
    while (n--)
    {
        string s;
        cin >> s;
        int x = stoi(s);//to convert string to int
        int r = sqrt(x);//square root
        if ( r * r != x)
        {
            cout << -1 << endl;
        }
        else 
        {
            cout << 0 << " " << r << endl;
        }
    }
    return 0;
}