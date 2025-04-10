#include <iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<<"Enter no. of rows & columns: ";
    cin>>n;

    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            cout<<i<<" ";
            i+=1;
        }
        cout<<endl;
    }
}