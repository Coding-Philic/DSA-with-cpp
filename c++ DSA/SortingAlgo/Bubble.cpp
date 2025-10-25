#include <iostream>
using namespace std;

// Simple Bubble Sort implementation with clear comments.
//
// Bubble sort repeatedly steps through the array, compares adjacent items
// and swaps them if they are in the wrong order. After each full pass
// the largest element among the remaining unsorted items "bubbles" to its
// correct position at the end of the array.
//
// Time complexity: O(n^2) in the worst and average case.
// Space complexity: O(1) - sorts in place.
//
// Parameters:
//  - arr : pointer to the first element of the array to sort
//  - n   : number of elements in the array
void bubble(int *arr, int n){
    // Outer loop: reduce the range of the array we still need to check.
    // After i decreases, the elements after i are already sorted.
    for(int i = n - 1; i >= 0; i--){
        // Inner loop: compare each pair of adjacent elements in the
        // unsorted portion [0 .. i]. If the left element is greater,
        // swap them so the bigger value moves right.
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]){
                // swap the two adjacent elements
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Print the sorted array. Each value is followed by a comma and space.
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main(){
    // Example usage:
    // Create an array with unsorted integers and call bubble() to sort it.
    int arr[] = {9, 5, 8, 7, 6, 3, 4, 1};
    int n = sizeof(arr) / sizeof(int);

    bubble(arr, n);

    return 0;
}