#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to change into Binary: ";
    cin >> n;

    int ans = 0;
    int place = 1; // This represents the current place value in the binary number (1, 10, 100, ...)

    while (n != 0) {
        int bit = n & 1; // Get the least significant bit
        ans += bit * place; // Add the bit to the correct place in the binary number
        n = n >> 1; // Right shift n to process the next bit
        place *= 10; // Move to the next place value in the binary number
    }

    cout << "Binary representation is " << ans << endl;
    return 0;
}
