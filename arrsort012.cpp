#include<iostream>
using namespace std;

void ArraySort(int arr[],int n){
    int i=0,j=1;
    while(i<n && j<n){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        i++;
        j++;
        }
        else{
        i++;
        j++;
        }
    }    
}

int printArray(int arr[],int n){
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[8] ={2,0,1,2,1,0,1,0};
    ArraySort(arr,8);
    printArray(arr,8);
}