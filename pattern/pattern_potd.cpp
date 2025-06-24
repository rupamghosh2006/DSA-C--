#include <iostream>
using namespace std;

int main() {
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n][n] = {0};
    int num = 1;

    for (int k = 0; k < n; k++) {
        for (int i = k, j = 0; i < n && j < n; i++, j++) {
            arr[i][j] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}