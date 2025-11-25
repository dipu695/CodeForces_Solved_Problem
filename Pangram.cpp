#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    bool seen[26] = {false};

    for(int i = 0 ; i < n ; i++)
    {
        int pos;
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            pos = s[i] - 'a';
        }
        else
        {
            pos = s[i] - 'A';
        }
        if (!seen[pos])
        {
            seen[pos] = true;
            cnt ++;
        }
    }
    if(cnt == 26)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}