#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findArraySum(vector<int> a, int n, vector<int> b, int m) {
int carry = 0, i = n-1, j = m-1,sum;
vector<int> ans;
while (i>=0 && j>=0){
    sum = a[i] + b[j] + carry;
    carry = sum/10;
    sum %=10;
    ans.push_back(sum);
    i--;
    j--;
}
while (i>=0){
    sum = a[i] + carry;
    carry = sum/10;
    sum %=10;
    ans.push_back(sum);
    i--;
}
while (j>=0){
    sum = b[j] + carry;
    carry = sum/10;
    sum %=10;
    ans.push_back(sum);
    j--;
}
while (carry != 0){
    sum = carry;
    carry = sum/10;
    sum %=10;
    ans.push_back(sum);
}
reverse(ans.begin(),ans.end());
return ans;
}

int main(){
    vector<int> a = {1,2,3};
    vector<int> b = {9,0,0};
    vector<int> ans = findArraySum(a,3,b,3);
    for(auto i : ans){
        cout<<i<<" ";
    }
}