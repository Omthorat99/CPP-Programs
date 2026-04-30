#include <iostream>
using namespace std;

template <typename T>
T myModulus(T a, T b) {

    if (b == 0) {
        throw "Error: Division by zero is not allowed!";
    }

    return a % b;
}

int main() {
    try {
        int x = 10, y = 3;
        cout << "Modulus (int): " << myModulus(x, y) << endl;

        int a = 5, b = 0;
        cout << "Modulus: " << myModulus(a, b) << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}