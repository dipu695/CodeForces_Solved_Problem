#include<iostream>
using namespace std;
int main()
{
    int l , b;
    cin >> l >> b;
    int count = 0;
    while (1)
    {
        l*=3;
        b*=2;
        
        count++;
        if(l > b)
        {
            break;
        }
    }
    cout << count;
}