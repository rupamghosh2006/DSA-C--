#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. to be checked: ";
    cin>>n;

    if(n>0){
        cout<<"The no. is positive."<<endl;
    }
    else if(n==0){
        cout<<"The no. is Zero.";
    }
    else{
        cout<<"The no. is negative."<<endl;
    }

}