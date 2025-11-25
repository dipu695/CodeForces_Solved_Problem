#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int height = 0, used = 0, need = 0;

    for (int i = 1;; i++)
    {
        need += i; // cubes needed for current level
        if (used + need <= n)
        {
            used += need;
            height++;
        }
        else
        {
            break;
        }
    }

    cout << height << endl;
    return 0;
}
