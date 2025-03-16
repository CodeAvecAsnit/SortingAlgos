#include<iostream>
using namespace std;
int counter=0;

void display(int arr[],int len){
  for(int i = 0 ; i < len;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void swap(int &a, int &b){
  int temp =a;
  a=b;
  b=temp;
}

void bubbleSort(int arr[],int len){
  for(int i=0;i<len-1;++i){
    for(int j = 0;j<len-i-1;++i){
      ++counter;
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

int main(){
  int arr[]={2,3,5,23,90,34,56,77,23,1,111,900};
  int len = sizeof(arr)/sizeof(arr[0]);
  cout<<"Array before sorting : ";
  display(arr,len);
  cout<<endl;
  bubbleSort(arr,len);
  cout<<"Array after Sorting : ";
  display(arr,len);
  cout<<"The number of steps for sorting with size "<<len<<" is :"<<counter<<endl;
  return 0;
}