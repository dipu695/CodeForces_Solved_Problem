#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k , l , c , d , p , nl , np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int drinks_based = total_drink / (n * nl);
    int lime_based = total_slices / n;
    int salt_based = total_salt / (n * np);

    int result = min(drinks_based , min(lime_based , salt_based));

    cout << result << endl;
    return 0;
}