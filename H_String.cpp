#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '1')
            {
                cnt++;
                while (i < s.length() && s[i] == '1')
                {
                    i++; // skip the whole group of 1s
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
