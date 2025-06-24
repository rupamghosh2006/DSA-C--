#include<iostream>
using namespace std;

void print_n_to_1(int n){
    if(n<1) return;
    cout<<n<<endl;
    print_n_to_1(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    print_n_to_1(n);
    return 0;
}