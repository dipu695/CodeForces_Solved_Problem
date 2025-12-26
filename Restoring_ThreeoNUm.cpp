#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[4];

    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> arr[i];
    }

    sort(arr , arr + 4);
    long long total = arr[3];
    long long c = total - arr[0];

    long long a = arr[1] - c;
    long long b = arr[2] - c;

    cout << a << " " << b << " " << c << endl;
    return 0;
}