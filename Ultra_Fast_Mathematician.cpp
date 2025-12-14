#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int n = a.size();
    string result = "";

    for (int i = 0; i < n; i++)
    {
        result += ((a[i] - '0') ^ (b[i] - '0')) + '0';
    }

    cout << result << endl;
    return 0;
}