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

        string s = to_string(n);

        if (n % 7 == 0)
        {
            cout << n << endl;
            continue;
        }

        bool done = false;

        for (int i = s.size() - 1; i >= 0 && !done; i--)
        {
            char org = s[i];

            for (char d = '0'; d <= '9'; d++)
            {
                if (d == org)
                    continue;
                if (i == 0 && d == '0')
                    continue;

                s[i] = d;
                int x = stoi(s);

                if (x % 7 == 0)
                {
                    cout << x << endl;
                    done = true;
                    break;
                }
            }
            s[i] = org;
        }
    }
    return 0;
}
