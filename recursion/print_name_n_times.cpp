#include<iostream>
using namespace std;

void PrintName(int n){
    if(n==0) return;
    cout<<"Rupam\n";
    return PrintName(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    PrintName(n);
}