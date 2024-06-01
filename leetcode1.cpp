/* input--> 234
output--->  2*3*4 - 2+3+4 */

#include <iostream>
using namespace std;

int main(){

    int n,digit,product=1,sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    while(n>0){
        digit=n%10;
        sum+=digit;
        product*=digit;
        n=n/10;
    }
    cout<< (product - sum)<<endl;
} 
