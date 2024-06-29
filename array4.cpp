#include <iostream>
#include <vector>
#include <algorithm> // sort is in this header

using namespace std;

int main() {
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    
    sort(arr.begin(), arr.end());
    
    // Loop through the vector and print each element
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
