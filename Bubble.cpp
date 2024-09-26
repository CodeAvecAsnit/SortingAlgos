#include<iostream>
using namespace std;

void Bubblesort(int arr[], int size){
  for(int i = 0 ; i<size-1;++i){
    for(int j = 0;j<size-i-1;++j){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

void swap(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}


void bubbledisplay(int arr[],int size){
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

  Bubblesort(a,n);
  bubbledisplay(a,n);
  return 0;
}


