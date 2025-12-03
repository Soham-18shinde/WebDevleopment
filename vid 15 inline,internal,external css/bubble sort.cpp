#include <iostream>
using namespace std;
void bubblesort(int A[],int n)
{
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
// to print the result
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {64, 25, 12, 22, 11}; // Sample array
    int n = sizeof(A)/sizeof(A[0]); // Find the number of elements in the array

    cout << "Original array: ";
    printArray(A, n); // Print the original array

    bubbleSort(A, n); // Sort the array using Bubble Sort

    cout << "Sorted array: ";
    printArray(A, n); // Print the sorted array

    return 0;
}