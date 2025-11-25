#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x , y ,z;
        cin >> x >> y >> z;

        if(x == y)
        {
            cout << z << endl;
        }
        else if( y == z)
        {
            cout << x << endl;
        }
        else 
        {
            cout << y << endl;
        }
    }
    return 0;
    

}