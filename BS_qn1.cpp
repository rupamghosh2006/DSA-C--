#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0, end = size - 1,ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
}
        return ans;
}

int lastOccurence(int arr[], int size, int key){
    int start = 0, end = size - 1,ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
}
        return ans;
}

int main(){

    int even[8]={1,1,2,2,2,2,4,7};
   
    cout<<firstOccurence(even,8,2)<<endl;
    cout<<lastOccurence(even,8,2)<<endl;
   
}