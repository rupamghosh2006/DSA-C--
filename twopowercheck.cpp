#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

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

    if (isPowerOf2) {
        cout << "The entered number is a power of 2." << endl;
    } else {
        cout << "The entered number is not a power of 2." << endl;
    }

    return 0;
}
