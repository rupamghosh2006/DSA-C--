#include<iostream>
using namespace std;

int diagonalSum(int matrix[][4], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i){
                sum += matrix[i][j];
            } else if(j == n-1-i){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    cout<<"Diagonal sum is: "<<diagonalSum(matrix,4)<<endl;
    return 0;
}