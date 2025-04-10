#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter no. of rows: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=3){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}