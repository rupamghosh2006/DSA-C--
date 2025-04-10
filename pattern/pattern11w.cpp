#include <iostream>
using namespace std;

int main(){
    int n,i=1;char ch='A';
    cout<<"Enter no. of rows: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=3){
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }
        cout<<"\n";
        i+=1;
    }
}