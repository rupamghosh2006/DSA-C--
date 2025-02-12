#include <iostream>
#include <algorithm>
using namespace std;

void intersection_array(int arr1[], int n1, int arr2[], int n2) {
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);
    int arr3[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] > arr2[j]) {
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            arr3[k++] = arr1[i++];
            j++;
        }
    }
    cout << "Intersection of the arrays: ";
    for (int x = 0; x < k; x++) {
        cout << arr3[x] << " ";
    }
    cout << endl;
}

int main() {
    int n1, n2;
    cout << "Enter size of array1: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of array1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of array2: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of array2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    intersection_array(arr1, n1, arr2, n2);
    return 0;
}
