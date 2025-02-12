#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the no. to check: ";
    cin>>n;
    bool isPrime = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)
            isPrime = 0;
    }
    if(isPrime==0){
        cout<<n<<" is Not a Prime no.";
    }else{
        cout<<n <<" is a Prime no.";
    }
    return 0;
}