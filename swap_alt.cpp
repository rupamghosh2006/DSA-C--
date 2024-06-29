#include<iostream>
using namespace std;

int SwapAlternate(int arr[],int size){
    for (int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    cout<<"Your array is: { ";
    for(int i=0; i<n;i++){
        cout<<arr[i];
        if(i<n-1){
        cout<<", ";
    }
    }
    cout<<" }"<<endl;
}

int main(){ 
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements of the array one by one."<<endl;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    SwapAlternate(arr,n);
    cout<<"After swapping alternate elements, the array is: ";
    printArray(arr,n);
}