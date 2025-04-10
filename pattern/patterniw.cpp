#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter tha max no. of * : ";
    cin>>n;

    int i=n-1;
    while(i>=0)
    {
        int j=i;
        while(j>0)
        {
        cout<<" ";
        j-=1;
        }
        int k=i;
        while(k<n)
        {
            cout<<"* ";
            k+=1;
        }
        cout<<endl;
        i-=1;
        }
    }