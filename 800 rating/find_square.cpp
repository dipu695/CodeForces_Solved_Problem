#include <bits/stdc++.h>

using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;
    vector<string> arr(r);

    for (int i = 0; i < r; i++)
    {
        cin >> arr[i];
    }

    int min_r = INT_MAX, max_r = INT_MIN;
    int min_c = INT_MAX, max_c = INT_MIN;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'B')
            {
                min_r = min(min_r, i);
                max_r = max(max_r, i);
                min_c = min(min_c, j);
                max_c = max(max_c, j);
            }
        }
    }

    cout << (min_r + max_r) / 2 + 1 << " " << (min_c + max_c) / 2 + 1;
    return 0;
}