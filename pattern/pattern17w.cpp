#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter no. of rows: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j+=1;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k+=1;
        }
        cout<<endl;
        i+=1;
    }
}