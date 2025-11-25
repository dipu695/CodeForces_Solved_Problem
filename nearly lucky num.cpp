#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // Check if number is exactly 47 or 74
    if (n == 47 || n == 74) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}