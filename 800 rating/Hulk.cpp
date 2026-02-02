#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the number of layers
    int n;
    cin >> n;

    // Initialize an empty string to build the feeling
    string feeling;

    // Loop through each layer from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Add "I hate" or "I love" based on the layer number
        if (i % 2 == 1) {
            feeling += "I hate";
        } else {
            feeling += "I love";
        }

        // Add "that" unless it's the last layer
        if (i != n) {
            feeling += " that ";
        }
    }

    // Add "it" at the end
    feeling += " it";

    // Print the constructed feeling
    cout << feeling << endl;

    return 0;
}