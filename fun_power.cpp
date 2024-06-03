#include<iostream>
using namespace std;

int power(int x,int y){
    int ans=1;
    for (int i=1;i<=y;i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int x, y;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>y;

    int answer = power(x,y);
    cout<<"Answer: "<<answer;
}