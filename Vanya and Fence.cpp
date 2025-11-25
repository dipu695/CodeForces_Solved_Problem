#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , h ;
    cin >> n ;
    cin >> h;
    vector< int > vec(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> vec[i];
        // int x;
        // cin>>x;
        //  vec.push_back(x);     
    }
    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(vec[i] > h)
        {
            count+=2;
        }
        else 
        {
            count+=1;
        }
    }
    cout << count << endl;

    return 0;
}
