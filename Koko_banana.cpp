#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> piles, int h, int mid){
    int hour_sum = 0;

    for(int i = 0; i < piles.size(); i++){
        hour_sum += ceil((double)piles[i]/mid);
    }
    if(hour_sum > h){
        return false;
    }
    return true;
}

int banana_eating_speed(vector<int> piles, int h){
    int ans;
    int start = 1, end = *max_element(piles.begin(), piles.end());
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(piles, h, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        //mid = start + (end - start)/2;
    }

    return ans;
}

int main(){
    vector<int> piles;
    int h, n;

    cout<<"Enter the value of h: ";
    cin>>h;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        piles.push_back(val); 
    }

    cout<<banana_eating_speed(piles, h);

    return 0;

}