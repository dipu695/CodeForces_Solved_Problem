#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;

                                        // while (n > 0)
                                        // {
                                        //     int temp = n % 10;  // Gets the last digit
                                        //     if (temp == 4 && temp == 7)
                                        //     {
                                        //        count ++;
                                        //     }
                                            
                                        //     n = n / 10;  // Removes the last digit
                                        // }
    for (char d : n)
    {
        if(d == '4' || d == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
     {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}