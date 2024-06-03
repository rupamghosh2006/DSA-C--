#include<iostream>
using namespace std;

int main(){
    int n,hundred,fifty,twenty,one;
    cout<<"Enter the amount in Rs: ";
    cin>>n;

    hundred = n/100;
    n=n%100;
    fifty= n/50;
    n=n%50;
    twenty = n/20;
    one =n%20;
    
    switch (100)
    {
    case 100: cout<<hundred<<" hundred Rs note."<<endl;
        
    case 50: cout<<fifty<<" fifty Rs note."<<endl;

    case 20: cout<<twenty<<" twenty Rs note."<<endl;

    case 1: cout<<one<<" one Rs note."<<endl;
    
    default:
        break;
    }

}