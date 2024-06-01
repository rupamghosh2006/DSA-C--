#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int next,t1=0,t2=1;
    cout<<t1<<" ,"<<t2<<" ,";
    for (int i=1;i<n-1;i++){

        next=t1+t2;
        cout<<next<<", ";
        t1=t2;
        t2=next;
    }
}