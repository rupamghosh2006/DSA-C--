#include <iostream>
using namespace std;

bool isPrime (int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the no. to check: ";
    cin>>n;

    if (isPrime(n)){
        cout<<"Prime.";
    }else{
        cout<<"Not prime.";
        }
}
