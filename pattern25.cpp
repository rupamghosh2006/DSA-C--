#include<iostream>
using namespace std;

void PrintPattern(int n){
    int to_print = n*n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<to_print<<" ";
            to_print--;
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter no. of rows & column: ";
    cin>>n;
    PrintPattern(n);
}