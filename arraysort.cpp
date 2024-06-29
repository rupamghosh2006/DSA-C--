#include<iostream>
using namespace std;

int ArraySort(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
    if(arr[i]==0){
        i++;
    }
    if(arr[j]==1){
        j--;
    }
    else if(arr[i]==1 && arr[j]==0)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[6] ={0,1,1,0,1,0};
    ArraySort(arr,6);
}