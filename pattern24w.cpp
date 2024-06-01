#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j+=1;
        }

        int s=1;
        while(s<=(i-1)*2){
            cout<<"*";
            s+=1;
        }

        int k=n-i+1;
        while(k>=1){
            cout<<k;
            k-=1;
        }

        cout<<endl;
        i+=1;
    }
}