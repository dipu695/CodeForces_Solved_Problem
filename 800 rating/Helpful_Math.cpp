#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector < char > num;
    for(int i = 0 ; i < s.length() ; i+=2)
    {
        num.push_back(s[i]);
    }

    sort(num.begin() , num.end());

    string res = "";

    for(int i = 0 ; i < num.size() ; i++)
    {
       res += num[i];
       if(i < num.size() - 1)
       {
        res += '+';
       }
      
    }
     cout << res;
}