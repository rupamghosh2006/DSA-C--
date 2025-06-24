#include<iostream>
using namespace std;

void Print_1_to_n(int n){
    if(n < 1) return;
    Print_1_to_n(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Print_1_to_n(n);
    return 0;
}