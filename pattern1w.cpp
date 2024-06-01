#include <iostream>
using namespace std;
int main(){

    int m,n;

    cout<<"Enter no. of rows: ";
    cin>>m;

    cout<<"Enter no. of columns: ";
    cin>>n;
    int i=0;
    while(i<m){
        int j=0;
        while(j<n){
            cout<<"* ";
            j+=1;
        }
        cout<<"\n";
        i+=1;
    }
}