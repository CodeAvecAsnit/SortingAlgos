#include<iostream>
using namespace std;
int counter = 0;

void display(int arr[], int len){
  for(int i = 0 ; i < len; ++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void swap(int &a,int &b){
  int temp = a ;
  a = b ;
  b = temp;
}

void SelectionSort(int arr[],int len){
  for(int i = 0 ; i < len-1 ;++i){
    int SIndex = i;
    for ( int j= i+1;j<len;++j){
      if(arr[SIndex]>arr[j]){
        SIndex=j;
      }
    }
    if(SIndex!=i){
      swap(arr[SIndex],arr[i]);
    }
  }
}

int main(){
  int Sorting_arr[]={2,6,7,1,90,99,45,44,23,22,32,33};
  cout<<"Array before Sorting : ";
  int len = sizeof(Sorting_arr)/sizeof(Sorting_arr[0]);
  display(Sorting_arr,len);
  SelectionSort(Sorting_arr,len);
  cout<<endl<<"Array after Sorting : ";
  display(Sorting_arr,len);
  return 0;
}