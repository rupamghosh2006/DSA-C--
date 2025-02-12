#include <iostream>
using namespace std;

int main(){

    int decNum;
    cout<<"Enter the no. to convert: ";
    cin>>decNum;

    int rem,ans=0;
    int pow = 1;
    while(decNum){
        rem = decNum%2;
        decNum /=2;
        ans += pow*rem;
        pow *= 10;
    }
    cout<<"Ans: "<<ans;
    return 0;
}