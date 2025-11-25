#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

string U(string str)
 {
    if (!str.empty()) 
    {
        str[0] = toupper(str[0]);
    }
    return str;
}

int main() 
{
    string s;
    cin >> s;
    cout << U(s) << endl;
    return 0;
}