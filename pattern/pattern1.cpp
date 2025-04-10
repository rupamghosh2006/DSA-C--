#include <iostream>
using namespace std;
int main(){

    int m,n;

    cout<<"Enter no. of rows: ";
    cin>>m;

    cout<<"Enter no. of columns: ";
    cin>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}