#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long st , jmp;
        cin >> st >> jmp;

        long long final_pos;
        if(jmp % 4 == 1){
            final_pos = - jmp;
        }
        else if (jmp % 4 == 2)
        final_pos = 1;
        else if(jmp  % 4 == 3)
        final_pos = jmp + 1;
        else if(jmp % 4 == 0)
        final_pos = 0;

        if(st % 2 == 0)
            final_pos = st + final_pos;

        else
            final_pos = st - final_pos;


        cout << final_pos << endl;
    }
    return 0;
}