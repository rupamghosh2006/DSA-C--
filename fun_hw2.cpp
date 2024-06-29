#include<iostream>
using namespace std;

int count_bit_set(int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) { 
            count++;
        }
        n = n >> 1; 
    }
    return count;
}

int main(){
    int n1,n2;
    cout<<"Enter 1st no: ";
    cin>>n1;
    cout<<"Enter 2nd no: ";
    cin>>n2;

    int ans1 = count_bit_set(n1);
    int ans2 = count_bit_set(n2);

    cout<<"1st no. bit set count: "<<ans1<<endl;
    cout<<"2nd no. bit set count: "<<ans2<<endl;

    cout<<"Total bit set count: "<<ans1+ans2<<endl;
}