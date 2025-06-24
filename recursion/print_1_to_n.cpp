#include<iostream>
using namespace std;

void Print_1_to_n(int i, int n){
    if(n < i) return;

    cout<<i<<endl;

    Print_1_to_n(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Print_1_to_n(1,n);
    return 0;
}