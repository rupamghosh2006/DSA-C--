#include<iostream>
using namespace std;

int max_RowSum(int matrix[][3], int rows, int cols){
    int max_sum = INT32_MIN;
    for(int i = 0; i<rows; i++){
        int row_sum = 0;
        for(int j = 0; j<cols; j++){
            row_sum += matrix[i][j];
        }
        max_sum = max(max_sum,row_sum);
    }
    return max_sum;
}

int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<"Max row sum is: "<<max_RowSum(matrix,3,3)<<endl;
    return 0;
}
