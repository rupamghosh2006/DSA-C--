#include <iostream>
#include <cmath>

using namespace std;

bool ArmstrongCheck(int n) {
    if (n < 0) return false; // Negative numbers are not Armstrong numbers
    
    int copyN = n, sum = 0, digit = 0;

    // Count the number of digits
    int temp = n;
    while (temp > 0) {
        temp /= 10;
        digit++;
    }

    // Correct power calculation
    temp = copyN; // Restore original number
    while (temp > 0) {
        int lastDigit = temp % 10;
        int power = 1;

        // Compute lastDigit^digit manually to avoid floating point issues
        for (int i = 0; i < digit; i++) {
            power *= lastDigit;
        }

        sum += power;
        temp /= 10;
    }

    return sum == copyN;
}

int main() {
    int n;
    cout << "Enter the number to check: ";
    cin >> n;

    if (ArmstrongCheck(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
