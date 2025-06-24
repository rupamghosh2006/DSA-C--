#include<iostream>
using namespace std;

void PrintName(int n){
    if(n==0) return;
    PrintName(n-1);
    cout<<"Rupam\n";
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    PrintName(n);
}