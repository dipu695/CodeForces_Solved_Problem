#include<bits/stdc++.h>
using namespace std;

int main()
{
    set < int > n;
    for(int i = 0 ; i < 4  ; i++)
    {
        int x;
        cin >> x;
        n.insert(x);
    }
    int cnt = 0;
    for(auto x:n)
    {
       cnt++; 
    }
    int final = 4 - cnt;
    cout << final << endl;
}