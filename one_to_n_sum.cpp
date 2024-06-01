#include <iostream>
using namespace std;

int main(){
    int i=1,n,sum=0;
    cout << "Enter the value of n: ";
    cin >>n;

    while(i<=n){
    sum+=i;
    i+=1;
    }
    cout<<sum;
}
