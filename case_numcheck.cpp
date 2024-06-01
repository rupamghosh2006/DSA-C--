#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character to be checked: ";
    cin>>ch;
    if(ch>='a'&& ch<='z')
    {
        cout<<"The character is Lowercase."<<endl;
    }
    else if(ch>='A'&& ch<='Z')
    {
        cout<<"The character is Uppercase."<<endl;
    }
    else if(ch>='0'&& ch<='9')
    {
        cout<<"The character is Numeric."<<endl;
    }
    else{
        cout<<"The character is neither alphabet nor numeric."<<endl;
    }
}