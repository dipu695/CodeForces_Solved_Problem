#include <bits/stdc++.h>
using namespace std;

int main()
{
    int press[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> press[i][j];
        }
    }

    int dx[] = {0 , -1 , 1 , 0 , 0};
    int dy[] = {0 , 0 , 0 , -1 , 1};

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            int count = 0;
            for(int k = 0 ; k < 5 ; k++){
                int ni = i + dx[k];
                int nj = j + dy[k];
                if(ni >= 0 && ni < 3 && nj >= 0 && nj < 3){
                    count += press[ni][nj];
                }
            }   

            if(count % 2 == 0){
               cout << 1; 
            }
            else{
                cout << 0;
            }
        }
        cout << endl;
    }

    
    return 0;
}