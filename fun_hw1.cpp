#include<iostream>
using namespace std;

int AP(int n){
    int ans = (3*n+7);
    return ans;
}
int main(){
    int n;
    cout<<"n= ";
    cin>>n;

    int ans = AP(n);
    cout<<"ans: "<<ans;
}