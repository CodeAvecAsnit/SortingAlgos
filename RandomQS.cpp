#include <iostream>
#include <cstdlib>  
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int RP(int arr[], int start, int end) {
    int randomIndex = start + rand() % (end - start + 1);
    swap(arr[randomIndex],arr[end]);
    int pivot =arr[end];
    int i =start-1;

    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[end]); 
    return i +1;
}

void RandomizedQS(int arr[], int start, int end) {
    if (start < end) {
        int pivotIndex=RP(arr,start,end);
        RandomizedQS(arr,start,pivotIndex- 1);
        RandomizedQS(arr, pivotIndex+ 1,end);
    }
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

    RandomizedQS(arr,0,n-1);
    cout << "Array after sorting: ";
    printArray(arr, n);

    return 0;
}