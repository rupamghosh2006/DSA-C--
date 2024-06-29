#include<iostream>
using namespace std;

int reverseArray(int arr[],int size){
    int start=0,end=size-1,temp=0;
    while(end>start){
        /*temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;*/ 
        swap(arr[end],arr[start]);
        start++;
        end--;
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

    cout<<"Before reversing."<<'\n';
    printArray(arr,n);

    reverseArray(arr,n);

    cout<<"After reversing."<<'\n';
    printArray(arr,n);

    }