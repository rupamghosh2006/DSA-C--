#include<iostream>
using namespace std;

int pivotInArray(int arr[],int size) {
        int start = 0, end = size -1;
        while(start <  end){
            int mid = start + (end - start)/2;
            if (arr[mid]>=arr[0]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }

int main(){
    int arr[7]={7,8,1,2,3,5,6};
    cout<<pivotInArray(arr,7);
}    