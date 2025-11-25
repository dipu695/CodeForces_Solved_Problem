#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for (char x : s) 
    {
        if (x >= 'A' && x <= 'Z') upper++;
        else if (x >= 'a' && x <= 'z') lower++;
    }
    if(upper > lower)
    {
        transform(s.begin() , s.end() , s.begin() , :: toupper);
        cout << s << endl;
    }
    else if (upper < lower)
    {
         transform(s.begin() , s.end() , s.begin() , :: tolower);
         cout << s << endl;
    }
    else 
    {
        transform(s.begin() , s.end() , s.begin() , :: tolower);
        cout << s <<endl;
    }
    
    

return 0;
}


