#include <iostream>
#include <string>
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

        if (n != 5)
        {
            cout << "NO\n";
            continue;
        }

        int countT = 0, count_i = 0, count_m = 0, count_u = 0, count_r = 0;

        for (char c : s)
        {
            if (c == 'T')
                countT++;
            else if (c == 'i')
                count_i++;
            else if (c == 'm')
                count_m++;
            else if (c == 'u')
                count_u++;
            else if (c == 'r')
                count_r++;
        }

        if (countT == 1 && count_i == 1 && count_m == 1 && count_u == 1 && count_r == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}