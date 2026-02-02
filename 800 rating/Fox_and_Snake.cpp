#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int row = 1; row <= n; ++row) {
        if (row % 2 == 1) {
            // Odd rows: full of '#'
            cout << string(m, '#') << endl;
        } else {
            // Even rows
            if (row % 4 == 2) {
                // First column is '#', rest are '.'
                cout << '#' << string(m - 1, '.') << endl;
            } else {
                // Last column is '#', rest are '.'
                cout << string(m - 1, '.') << '#' << endl;
            }
        }
    }

    return 0;
}