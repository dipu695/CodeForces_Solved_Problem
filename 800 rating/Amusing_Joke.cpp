#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;

    // Count frequency of letters in combined names
    map<char, int> combined_count;
    for (char c : guest)
    {
        combined_count[c]++;
    }
    for (char c : host)
    {
        combined_count[c]++;
    }

    // Count frequency of letters in pile
    map<char, int> pile_count;
    for (char c : pile)
    {
        pile_count[c]++;
    }

    // Check if they match
    if (combined_count == pile_count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}