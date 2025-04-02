#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;
    vector<int> ans;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}
void PrintVector(vector<int>& arr){
    for(int num : arr){
        cout<<num<<" ";
    }
}
int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    vector<int> result = SpiralMatrix(matrix);

    PrintVector(result);
    return 0;
}