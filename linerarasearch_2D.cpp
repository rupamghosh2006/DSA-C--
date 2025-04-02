#include <iostream>
using namespace std;

pair<int, int> LinearSearch_2D(int matrix[3][3], int key) {
    int rows = 3, cols = 3;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (key == matrix[i][j]) {
                return {i, j};  // Return position immediately
            }
        }
    }
    
    return {-1, -1};  // Return (-1, -1) if not found
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int n;
    cout << "Enter the number you want to search: ";
    cin >> n;

    pair<int, int> result = LinearSearch_2D(matrix, n);
    
    if (result.first == -1) {
        cout << "Element not found\n";
    } else {
        cout << "Element found at index: (" << result.first << ", " << result.second << ")\n";
    }

    return 0;
}
