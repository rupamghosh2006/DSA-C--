#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. to be reversed: ";
    cin>>n;

    int ans=0;
    while(n!=0){
        if(ans>INT32_MAX/10 ||ans<INT32_MIN/10){
            return 0;
        }
        else{
            int dig = n%10;
            ans=(ans*10)+dig;
            n=n/10;
        }
    }
    cout<<"After reversing: "<<ans;
}