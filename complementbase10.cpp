#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. whose complement is to be printed: ";
    cin>>n;
    int m=n,mask=0;

    if(n==0){
        cout<<"Ans: 1";
    }
    
    while(n!=0){
        mask = (mask<<1)|1;
        n=n>>1;
    }
    int ans =(~m) & mask;
    cout<<"Ans: "<<ans;
}