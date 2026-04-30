#include <iostream>
using namespace std;

// Function template
template <typename T>
T mymodulus(T a, T b) {

    // Check if b is zero
    if (b == 0) {
        throw "Error: Division by zero is not allowed!";
    }

    return a % b; // modulus operation (works for int)
}

int main() {
    try {
        // Test with int
        int x = 10, y = 3;
        cout << "Modulus (int): " << mymodulus(x, y) << endl;

        // Test case with b = 0
        int a = 5, b = 0;
        cout << "Modulus: " << mymodulus(a, b) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}