#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    bool inOK = false;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        if (k == 1)
        {
            inOK = true;
        }
    }

    if (inOK)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}