#include<iostream>
using namespace std;

void printArray(int arr[],int size){

        for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

    int main(){

    int arr[15] ={1,2,3,4};
    int n;
    cout<<"Enter no of elements you want to print: ";
    cin>>n;
    printArray(arr,n);

    }

    