#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    T sum = a + b;

    // Check if sum exceeds 100
    if (sum > 100) {
        throw "Error: Sum exceeds 100!";
    }

    return sum;
}

int main() {
    try {
        // Test with int
        int x = 40, y = 50;
        cout << "Addition (int): " << add(x, y) << endl;

        // Test with float
        float p = 20.5, q = 30.2;
        cout << "Addition (float): " << add(p, q) << endl;

        // Test case exceeding 100
        int a = 80, b = 30;
        cout << "Addition: " << add(a, b) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}