#include<iostream>
using namespace std;

int max_ColumnSum(int matrix[][3], int rows, int cols){
    int max_sum = INT32_MIN;
    for(int j = 0; j<cols; j++){
        int col_sum = 0;
        for(int i = 0; i<rows; i++){
            col_sum += matrix[i][j];
        }
        max_sum = max(max_sum,col_sum);
    }
    return max_sum;
}

int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<"Max row sum is: "<<max_ColumnSum(matrix,3,3)<<endl;
    return 0;
}
