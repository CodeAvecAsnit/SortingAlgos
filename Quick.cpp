#include<iostream>
using namespace std;

int Findpivot(int arr[],int start,int end){
  int pivot = arr[end];  
    int i = start - 1;  
    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);  
        }
    }
    swap(arr[i + 1], arr[end]);  
    return i + 1;
}

void QuickSort(int arr[],int start,int end){
  if(start<end){
    int pivot = Findpivot(arr,start,end);
    QuickSort(arr,start,pivot-1);
    QuickSort(arr,pivot+1,end);
  }
}

void printArray(int arr[],int len){
  for(int i = 0 ; i < len;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[10];
  cout<<"Enter the size of the array : ";
  int n;
  cin>>n;
  for(int i = 0; i < n;++i){
    cout<<"Enter data : ";
    cin>>arr[i];
  }
  cout<<"Array before sorting : ";
  printArray(arr,n);
  QuickSort(arr,0,n-1);
  cout<<"Array after sorting : ";
  printArray(arr,n);
  return 0;
}