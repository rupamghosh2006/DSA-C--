#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    bool isPowerOf2 = true;

    // Checking if the number is less than or equal to 0
    if (n <= 0) {
        isPowerOf2 = false;
    }

    // Checking if the number is a power of 2
    while (n > 1) {
        if (n % 2 != 0) {
            isPowerOf2 = false;
            break;
        }
        n /= 2;
    }

    return isPowerOf2;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}
