#include<iostream>
using namespace std;

int Fibonacci_element(int n){
    int t1=0,t2=1,sum=0;

    if(n==1){
    return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=1;i<n-1;i++){
        sum = t1+t2;
        t1=t2;
        t2=sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Which element of Fibonacci series you want?: ";
    cin>>n;
    cout<<Fibonacci_element(n);
}