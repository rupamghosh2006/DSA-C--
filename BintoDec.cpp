#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Binary number to convert: ";
    cin >> n;

    int ans = 0, i = 1;
    while (n != 0) {
        int bit = n % 10;
        ans = ans + (i * bit);
        i = i * 2;
        n = n / 10;
    }
    cout << "Decimal equivalent: " << ans << endl;

    return 0;
}
