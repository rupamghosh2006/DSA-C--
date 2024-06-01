#include <iostream>
using namespace std;

int main(){
    int a=1,n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=1;
        }
        cout<<"\n";
    }
}