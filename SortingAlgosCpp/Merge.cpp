#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    for (int i = 0; i < n1; ++i) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        rightArr[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) { 
            arr[k]=leftArr[i];
            ++i;
        } else {
            arr[k] =rightArr[j];
            ++j;
        }
        ++k;
    }
    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }
    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start >= end) return; 
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; ++i) {
        cout << "Enter data: ";
        cin >> arr[i];
    }
    cout << "Array before sorting: ";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);  
    cout << "Array after sorting: ";
    printArray(arr, n);
    return 0;
}
