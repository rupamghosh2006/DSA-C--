#include<iostream>
using namespace std;

int reverseInt(int n){
    int rem,ans=0;
    while(n){
        rem = n%10;
        ans = (ans*10) + rem;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the no you want to reverse: ";
    cin>>n;
    cout<<"Revrse: "<<reverseInt(n);
    return 0;
}