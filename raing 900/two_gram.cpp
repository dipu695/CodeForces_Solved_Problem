#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    map<string, int> count;
    
    for (int i = 0; i < n - 1; i++) {
        count[s.substr(i, 2)]++;
    }
    
    int maxCnt = 0;
    string ans;
    
    for (auto p : count) {
        if (p.second > maxCnt) {
            maxCnt = p.second;
            ans = p.first;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}