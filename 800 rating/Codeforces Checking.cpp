#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        char ch;
        cin >> ch;

        string s = "codeforces";
            bool f = false;

            for(int i = 0 ; i < s.size() ; i++)
            {
                if(s[i] == ch)
                {
                    f = true;
                    break;
                }
                    
            }

            if(f)
            {
                cout <<"YES" << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
    }
    return 0;
}