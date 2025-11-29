#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x , y , z;

    cin >> x >> y >> z;

    int M = max(x,max(y , z));
    int Mi = min(x , min(y , z));

    if(M - Mi >= 10)
    {
        cout << "check again" << endl;
    }
    else
    {
       int median = (x + y + z) - M  - Mi;
        cout <<"final "<< median << endl;
    }
    return 0;
}