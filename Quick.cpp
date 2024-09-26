#include<iostream>
using namespace std;

void Quicksort(int a[], int size){
  


}

void swap(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}


void selectiondisplay(int arr[],int size){
  cout<<"The data is : ";
  for(int i=0;i<size;++i){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int n,a[10];
  cout<<"Enter the size of the data : ";
  cin>>n;
  for(int i = 0 ; i < n ; ++i){
    cout<<"Enter data : ";
    cin>>a[i];
  }

  Selectionsort(a,n);
  selectiondisplay(a,n);
  return 0;
}


