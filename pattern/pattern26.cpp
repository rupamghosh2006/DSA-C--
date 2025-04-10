#include<iostream>
using namespace std;

void PrintPattern(int n){
    for(int row=1;row<=n;row++){
        for(int col=row;col<(2*row);col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of rows :";
    cin>>n;

    PrintPattern(n);
}