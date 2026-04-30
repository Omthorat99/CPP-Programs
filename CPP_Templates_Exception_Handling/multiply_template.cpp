#include <iostream>
using namespace std;

// Function template
template <typename T>
T multiply(T a, T b) {
    // Check for negative values
    if (a < 0 || b < 0) {
        throw "Error: Negative values are not allowed!";
    }
    return a * b;
}

int main() {
    try {
        // Test with int
        int x = 5, y = 3;
        cout << "Multiplication (int): " << multiply(x, y) << endl;

        // Test with float
        float p = 2.5, q = 4.0;
        cout << "Multiplication (float): " << multiply(p, q) << endl;

        // Test with negative value
        int a = -2, b = 6;
        cout << "Multiplication: " << multiply(a, b) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}