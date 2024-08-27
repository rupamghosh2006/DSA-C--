#include <iostream>
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch + 32;
        return temp;
    }
}
int main(){
    cout<<toLower('q');
}