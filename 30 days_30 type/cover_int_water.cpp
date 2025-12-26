// DAY 3
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i - 1] == '.' and s[i] == '.' and s[i + 1] == '.')//it means continoua (...)
            {
                ans = 2;
                break;
            }
        }

        if (ans == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                    ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}