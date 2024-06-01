#include <iostream>
using namespace std;

int main(){
    int n,row=1;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    while(row<=n){
        
        int space =1;
        while(space<row){
            cout<<" ";
            space+=1;
        }
        int col=row;
        while(col<=n){
            cout<<"*";
            col+=1;
        }
        row+=1;
        cout<<"\n";
    }
}