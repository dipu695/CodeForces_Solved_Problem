#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<int> s;
    vector<int> temp;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.insert(arr[i]).second)
        {
            temp.push_back(arr[i]);
        }
    }

    reverse(temp.begin(), temp.end());

    cout << temp.size() << endl;
    for (int x : temp)
        cout << x << " ";

    return 0;
}