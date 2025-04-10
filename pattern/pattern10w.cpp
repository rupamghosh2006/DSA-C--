#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter no. of rows and column: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            char ch= 'A'+j-1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}