/*Example
lcm⁡(4,6) means 

Multiples of 4 are:{ 4,8,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72,76,...}

Multiples of 6 are:{ 6,12,18,24,30,36,42,48,54,60,66,72,...}

Common multiples of 4 and 6 are the numbers that are in both lists:{12,24,36,48,60,72,...}

In this list, the smallest number is 12. Hence, the least common multiple is 12.*/




#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a = 1;
    for(int i = 2 ; i <= 50 ; i++){
        a = lcm(a , i);
    }
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int i = 1;
        while(n % i == 0)
            i++;
        cout << i - 1 << endl;
    }
    return 0;
}