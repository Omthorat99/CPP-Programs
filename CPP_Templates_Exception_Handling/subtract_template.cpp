#include <iostream>
using namespace std;

// Function template
template <typename T>
T subtract(T a, T b) {
    T result = a - b;

    // Check if result is negative
    if (result < 0) {
        throw "Error: Result is negative!";
    }

    return result;
}

int main() {
    try {
        // Test with int
        int x = 10, y = 5;
        cout << "Subtraction (int): " << subtract(x, y) << endl;

        // Test with double
        double p = 5.5, q = 2.2;
        cout << "Subtraction (double): " << subtract(p, q) << endl;

        // Test case with negative result
        int a = 3, b = 8;
        cout << "Subtraction: " << subtract(a, b) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
} 