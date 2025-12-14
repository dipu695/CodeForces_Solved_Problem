#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> uq;
    

        int p;
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            uq.insert(x);
        }

        int q;
        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int y;
            cin >> y;
            uq.insert(y);
        }
    
    if (uq.size() == t)
    {
        cout <<  "I become the guy." << endl;
    }
    else
    {
        cout <<"Oh, my keyboard!"<< endl;
    }

    return 0;
}