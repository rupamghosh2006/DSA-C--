#include <iostream>
using namespace std;

int main(){

    int row=1,n,count=1;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    while(row<=n){
        int space=row;
        while(space<n){
        cout<<"  ";            
        space+=1;
        }
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
    row+=1;
    }
}