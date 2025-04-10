#include <iostream>
using namespace std;
int main(){

    int m,n;

    cout<<"Enter no. of rows: ";
    cin>>m;

    cout<<"Enter no. of columns: ";
    cin>>n;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}