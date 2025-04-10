#include <iostream>
using namespace std;

int main(){

    int n,i=1;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<"* ";
            j+=1;
        }
        cout<<endl;
        i+=1;

    }
}