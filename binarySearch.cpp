#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
}
        return -1;
}

int main(){

    int even[6]={2,4,6,12,18};
    int odd[5]={3,8,11,14,16};
    
    cout<<binarySearch(even,6,12)<<endl;
    cout<<binarySearch(odd,5,12);
}