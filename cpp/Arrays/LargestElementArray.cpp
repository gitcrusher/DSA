#include<iostream>
using namespace std;

int fun(int arr[], int n) {
    int maxVal = arr[0]; // Assume the first element is the largest

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i]; // Update maxVal if current element is bigger
        }
    }
    return maxVal; // Return the largest value found
}

int main() {
    int n;
    cout << "Enter the length: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Largest Element is: " << fun(arr, n);
    return 0;
}