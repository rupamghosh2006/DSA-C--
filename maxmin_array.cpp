#include<iostream>
using namespace std;

int Max_element(int arr[],int n){
    int maxi = arr[0];
    for (int i =1; i<n;i++){
        if (maxi<arr[i])
            maxi = arr[i];
            // maxi = max(maxi,arr[i])
    }
    return maxi; 
}

int Min_element(int arr[],int n){
    int mini = arr[0];
    for (int i =1; i<n;i++){
        /*if (mini>arr[i])
           mini = arr[i];*/
        mini = min(mini,arr[i]);
    }
    return mini; 
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
    cout<<"Max element from the array is "<<Max_element(arr,n)<<endl;
    cout<<"Min element from the array is "<<Min_element(arr,n);
}