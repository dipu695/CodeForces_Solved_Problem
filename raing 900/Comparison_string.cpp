#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int current_level = 0 ,  min_level = 0 , max_level = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '<')
            {
                current_level++;
            }else{
                current_level--;
            }

            if(current_level < min_level){
                min_level = current_level;
            }
            if(current_level > max_level){
                max_level = current_level;
            }

        }
         cout << (max_level - min_level + 1) << endl;

    }
    return 0 ;
} 