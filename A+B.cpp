#include <iostream>
#include <limits> // Required for cin.ignore if using a hybrid approach

using namespace std;

int main()
{

    int t;
  
    if (!(cin >> t))
        return 0;

    char plus_sign;

    while (t--)
    { 
        int a, b;

        if (cin >> a >> plus_sign >> b)
        {

            cout << a + b << "\n";
        }
    }

    return 0;
}