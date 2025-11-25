#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    int countA = 0;
    int countD = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> s[i];
       
    }
    for(char x: s)
    {
        if(x == 'A')
        {
            countA++;
        }
        if(x == 'D')
        {
            countD++;
        }
    }
    if(countA == countD)
    {
        cout << "Friendship" << endl;
    }
    else if(countA > countD)
    {
        cout << "Anton" << endl;
    }
    else 
    {
        cout << "Danik" <<endl;
    }

    
    return 0;
}
