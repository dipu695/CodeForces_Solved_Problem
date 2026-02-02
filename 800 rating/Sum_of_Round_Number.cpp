#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> round_numbers;
        int place_value = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                round_numbers.push_back(digit * place_value);
            }
            n /= 10;
            place_value *= 10;
        }

        cout << round_numbers.size() << endl;
        for (int i = 0; i < round_numbers.size(); i++)
        {
            cout << round_numbers[i];
            if (i < round_numbers.size() - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}