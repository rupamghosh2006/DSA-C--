#include<iostream>
using namespace std;

bool search(int size, int arr[],int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){

    int key, arr[10] = {1,-2,8,22,78,-45,10,99,69,25};
    cout<<"Enter the key to search: ";
    cin>>key;

    bool found = search(10,arr,key);

    if(found){
        cout<<"Key is found.";
    }
    else{
        cout<<"key is not found.";
    }
    
}