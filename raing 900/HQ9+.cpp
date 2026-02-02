#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool check = false;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){

            check = true;
            break;
        }
    }

    if(check == true){
        cout <<"YES" << endl;
    }else{
        cout <<"NO" << endl;
    }
        return 0;
}