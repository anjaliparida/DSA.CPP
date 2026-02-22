#include <iostream>
using namespace std;

// Function to find minimum
int findMin(int arr[], int n) {
    int minVal = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < minVal) 
            minVal = arr[i];
    }
    return minVal;
}

// Function to find maximum
int findMax(int arr[], int n) {
    int maxVal = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] >maxVal )
            maxVal = arr[i];
    }
    return maxVal;
}


int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum: " << findMax(arr, n) << endl;
    cout << "Minimum: " << findMin(arr, n) << endl;
    return 0;
}