#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5];
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(arr[i][j] == 1)
            {
                int answer = abs(i - 2) + abs(j - 2);
                cout << answer << endl;
            }
        }
    }


return 0;
}