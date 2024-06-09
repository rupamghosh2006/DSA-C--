#include<iostream>
using namespace std;

int SumOfElements(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
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
    cout<<"Sum of elements of the array is: "<<SumOfElements(arr,n);
}