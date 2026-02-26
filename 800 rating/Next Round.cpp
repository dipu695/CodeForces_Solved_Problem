
#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;//number of contestant
    cin >> k;//position...

    int arr[n];
    int count = 0;
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0 ; i < n ; i++)
    {
       
         if ( arr[i] > 0 && arr[i] >= arr[(k - 1)])
        {
         count++;
        }
       
    }

    cout << count << endl;


    return 0;
}
