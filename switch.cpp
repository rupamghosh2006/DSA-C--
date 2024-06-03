#include<iostream>
using namespace std;
int main(){

    int num =2;
    char ch ='1';

    switch (ch)
    {
    case 1:
        cout<<"This is 1st case."<<endl;
        break;
    case 2:
        cout<<"This is 2nd case."<<endl;
    case '1':
        switch(num)
        {
            case 2:
                cout<<"This is 2nd nested case."<<endl;
                break;
            case 1:
                cout<<"This is 1st nested case."<<endl;    
                break;
        }
    default:
        cout<<"This is default case."<<endl;
        break;
    }
}