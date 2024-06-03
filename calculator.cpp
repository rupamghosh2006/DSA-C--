#include<iostream>
using namespace std;
int main(){
    char ch;
    int n1,n2;
    cout<<"Enter the 1st number: ";
    cin>>n1;
    cout<<"Chose the any operation +,-,*,/ or % :";
    cin>>ch;
    cout<<"Enter the 2nd number: ";
    cin>>n2;

    switch(ch){
        case '+':
        cout<<"Ans: "<< n1 + n2<<endl;
        break;
        case '-':
        cout<<"Ans: "<< n1 - n2<<endl;
        break;
        case '*':
        cout<<"Ans: "<< n1 * n2<<endl;
        break;
        case '/':
        cout<<"Ans: "<< n1 / n2<<endl;
        break;
        case '%':
        cout<<"Ans: "<< n1 % n2<<endl;
        break;
        default:
        cout<<"Not a valid operation.";
        break;
    }
}