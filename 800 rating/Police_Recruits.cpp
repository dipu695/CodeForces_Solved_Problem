#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p = 0;
    int c = 0;
    int n;
for(int i = 0; i < n ; i++)
{
    cin >> n;
    if(n == -1)
    {
        if(p > 0)
        {
            p--;
        }
        else
        {
            c++;
        }
    }
     else
        {
            p += n;
        }
}
cout << c << endl;
    return 0;
}