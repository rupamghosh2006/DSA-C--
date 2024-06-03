#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter the no. to be checked: ";
    cin>>n;

    if(isEven(n)){
        cout<<"number is Even.";
    }
    else{
        cout<<"number is Odd.";
    }
}