#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    for (int year = y + 1;; year++)
    {
        // Extract all 4 digits
        int d1 = year / 1000;
        int d2 = (year / 100) % 10;
        int d3 = (year / 10) % 10;
        int d4 = year % 10;

        // Count frequency of each digit
        int count[10] = {0}; // Initialize all to 0
        count[d1]++;
        count[d2]++;
        count[d3]++;
        count[d4]++;

        // Check if all digits are distinct
        // If any digit appears more than once, it's not distinct
        bool allDistinct = true;
        for (int i = 0; i < 10; i++)
        {
            if (count[i] > 1)
            {
                allDistinct = false;
                break;
            }
        }

        // If all digits are distinct, print and exit
        if (allDistinct)
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}