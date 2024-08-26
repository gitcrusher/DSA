#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int arr[n];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Reading the target value
    cin >> m;
    
    int firstcount = -1, lastcount = -1;
    
    // Loop to find the first and last occurrence
    for (int i = 0; i < n; i++) {
        if (arr[i] == m) {
            if (firstcount == -1) {
                firstcount = i;  // First occurrence
            }
            lastcount = i;  // Last occurrence
        }
    }
    
    // Output based on whether the target was found or not
    if (firstcount == -1) {
        cout << "Target value " << m << " is not found in the array" << endl;
    } else {
        cout << "The first occurrence of " << m << " is at index " << firstcount << endl;
        cout << "The last occurrence of " << m << " is at index " << lastcount << endl;
    }

    return 0;
}
