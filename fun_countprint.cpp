#include<iostream>
using namespace std;

//Function Signature
void PrintCounting(int n){
    //Function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"enter a no: ";
    cin>>n;
    //Function call
    PrintCounting(n);

    return 0;
}