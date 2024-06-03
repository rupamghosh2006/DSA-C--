#include<iostream>
using namespace std;

int factorial(int x){
    int fact =1;
    for(int i=x;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}

int main(){
    int n,r;
    cout<<"n= ";
    cin>>n;
    cout<<"r= ";
    cin>>r;
    int ans =nCr(n,r);
    cout<<"Ans: "<<ans;

}