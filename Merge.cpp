#include<iostream>
using namespace std;

void MergeSort(int a[], int size){
  for(int i = 0 ; i < size - 1; ++i){ 
    int smallest = i;
    for(int j = i + 1; j < size; ++j){
      if(a[smallest] > a[j]){
        smallest = j;
      }
    }
    if(smallest != i){ 
      swap(a[i], a[smallest]); 
  }
}
}


void MergeDisplay(int arr[], int size){
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

  MergeSort(a, n);
  MergeDisplay(a, n);
  return 0;
}
