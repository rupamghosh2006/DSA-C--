#include <iostream>
using namespace std;
int main(){

    int m,n;

    cout<<"Enter no. of rows: ";
    cin>>m;

    cout<<"Enter no. of columns: ";
    cin>>n;

    int i=1;
    while(i<=m){

        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j+=1;
        }
        cout<<"\n";
        i+=1;
    }
}