#include<iostream>
using namespace std;
int main(){
cout << "Enter no. of rows to print: ";
int n;
cin >> n;
for(int i = 1; i <= n; i++){
    for (int j = 1; j <= n - i; j++){
        cout<<" ";
    }
    for (int k = 1; k <= (i*2) - 1; k++){
        cout<<k;
    }
    cout<<endl;
}
}