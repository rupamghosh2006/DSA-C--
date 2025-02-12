#include<iostream>
#include<math.h>
using namespace std;

int binToDec(int binNum){
    int bit,ans=0,i=0;
        while(binNum){
            bit = binNum % 10;
            ans += (pow(2,i)*bit);
            binNum /= 10;
            i++;
        }
    return ans;
}
int main(){
    int binNum;
    cout<<"Enter the no. to convert: ";
    cin>>binNum;
    // for(int i=0;i<100;i++){
    //     cout<<i<<" = "<<binToDec(i)<<"\n";
    // }
    
    cout<<"Ans: "<<binToDec(binNum);
    return 0;
}