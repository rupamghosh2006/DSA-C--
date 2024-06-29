#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Upto which term you want to print: ";
    cin>>n;

    int next,t1=0,t2=1;

    if(n==1){
    cout << t1;
    }
    else if(n==2){
    cout<<t1<<", "<<t2<<", ";
    }
    else{
    cout<<t1<<", "<<t2<<", ";    
    for (int i=1;i<n-1;i++){
    
        next=t1+t2;
        cout<<next<<", ";
        t1=t2;
        t2=next;
    }
    }
}