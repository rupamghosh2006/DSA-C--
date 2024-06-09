#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements of the array one by one."<<endl;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array is: { ";
    for(int i=0; i<n;i++){
        cout<<arr[i];
        if(i<n-1){
        cout<<", ";
        
    }
    }
    cout<<" }"<<endl;
}