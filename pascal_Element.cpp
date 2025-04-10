#include<iostream>
using namespace std;

long long int factorial(int n){
    long long int fact = 1;
    for(int i = n; i >= 1; i--){
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r) {
    if (r > n) return 0; // Invalid case
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int Pascal_Element(int row, int col){
    return nCr(row - 1, col - 1);
}

/*long long nCr(int n, int r) {
    if (r > n) return 0; // Invalid case
    if (r == 0 || r == n) return 1; // Base cases

    long long res = 1;
    r = min(r, n - r); // Take advantage of symmetry: nCr = nC(n-r)

    for (int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}*/

int main(){
    int row, col;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    cout<<"Pascal Element for "<<row<<" row and "<<col<<" column is: "<<Pascal_Element(row,col);
    return 0;
}