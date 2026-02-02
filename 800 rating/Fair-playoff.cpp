#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        vector<int> v = {s1, s2, s3, s4};
        sort(v.begin(), v.end()); 

        int max1 = v[3]; 
        int max2 = v[2]; 

        
        bool max1_in_first = (max1 == s1 || max1 == s2);
        bool max2_in_first = (max2 == s1 || max2 == s2);

        if (max1_in_first != max2_in_first)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
