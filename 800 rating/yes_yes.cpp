#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string cycle = "Yes";

    while (t--)
    {
        string s;
        cin >> s;
        bool ok = true;

        for (int i = 0; i + 1 < (int)s.size(); i++)
        {
            int pos = cycle.find(s[i]);
            if (pos == string::npos)
            {
                ok = false;
                break;
            }

            char expected = cycle[(pos + 1) % 3];
            if (s[i + 1] != expected)
            {
                ok = false;
                break;
            }
        }

        if (ok && cycle.find(s.back()) == string::npos)
        {
            ok = false;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
