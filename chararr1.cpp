#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0, i = 0;
    while(name[i++] != '\0'){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;
    //name[2] = '\0';

    cout<<"Your name is: "<<name<<"\n";
    cout<<"Length of your name is: "<<getLength(name);
}