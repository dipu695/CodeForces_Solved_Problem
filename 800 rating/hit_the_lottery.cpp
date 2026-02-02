#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int b = 0;
    int de[] ={100 , 20 , 10 , 5 , 1};

    for(int i = 0 ; i < 5 ; i++)
    {
        b += n / de[i];
        n = n%de[i];
    }

    cout << b << endl;
    return 0;
}