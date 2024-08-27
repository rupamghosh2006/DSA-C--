#include <iostream>
using namespace std;

int getLength(char name[]){
    int count = 0, i = 0;
    while(name[i++] != '\0'){
        count++;
    }
    return count;
}
char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch + 32;
        return temp;
    }
}
bool Check_Palindrome(char s[], int n){
    int start = 0, end = n - 1;
    while(start < end){
        //This is case sensitive.
        //if(s[start] != s[end])

        //This is NOT case sensitive.
        if(toLower(s[start]) != toLower(s[end]))
        {
            return 0;
        }else{
            start ++;
            end --;
        }
    }
    return 1;
}

int main (){
    char s[20];
    cout<<"Enter the string: ";
    cin>>s;
    int len = getLength(s);
    cout<<"The string is Palindrome or not: "<<Check_Palindrome(s,len);
}