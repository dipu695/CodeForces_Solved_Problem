#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        //string b = ""; 
        reverse(s.begin() , s.end());
        for(char &c : s)
        {
            if(c == 'q') c = 'p';
            else if (c == 'p') c = 'q';

        }
        cout << s << endl;
    }
    
    return 0;
}