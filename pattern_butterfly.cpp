#include<iostream>
using namespace std;

void pyramid(int i){
    for(int j=1; j<=i; j++){
            cout<<"*";
        }
}
void rev_pyramid(int i,int n){
    for(int j=n; j>i; j--){
            cout<<"*";
        }
}
int main(){
    int n = 4;
    for(int i=1; i<=n; i++){
        pyramid(i);
        for(int s=1; s<=2*(n-i); s++){
            cout<<" ";
        }
        pyramid(i);
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        rev_pyramid(i,n);
        for(int s=1; s<=2*i; s++){
            cout<<" ";
        }
        rev_pyramid(i,n);
        cout<<endl;
    }
    return 0;
}