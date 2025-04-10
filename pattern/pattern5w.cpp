#include <iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<<"Enter no. of rows & columns: ";
    cin>>n;

    int a=0;
    while(a<n)
    {
        int b=0;
        while(b<n)
        {
            cout<<i<<" ";
            i+=1;
            b+=1;
        }
        cout<<endl;
        a+=1;
    }
}