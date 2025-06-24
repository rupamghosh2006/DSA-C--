#include<iostream>
using namespace std;

void Print_N_to_1(int i, int n){
    if(i > n) return;
    Print_N_to_1(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Print_N_to_1(1,n);
    return 0;
}