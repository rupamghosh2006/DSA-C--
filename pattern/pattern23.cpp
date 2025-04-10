#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    while(i<=n){
        int s=i;
        while(s<n){
            cout<<"  ";
            s+=1;
        }
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j+=1;
        }
        int k=i-1;
        while(k>=1){
            cout<<k<<" ";
            k-=1;
        }
        cout<<endl;
        i+=1;
    }
}