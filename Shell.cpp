#include<iostream>
using namespace std;

void ShellSort(int a[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i += 1) {
            int temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
                a[j] = a[j - gap];
            }
            a[j] = temp;
        }
    }
}

void ShellDisplay(int arr[], int size){
  cout << "The data is : ";
  for(int i = 0; i < size; ++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int n, a[10];
  cout << "Enter the size of the data : ";
  cin >> n;
  for(int i = 0; i < n; ++i){
    cout << "Enter data : ";
    cin >> a[i];
  }

  ShellSort(a, n);
  ShellDisplay(a, n);
  return 0;
}
