#include<iostream>
using namespace std;

void InsertionSort(int a[], int size){
for(int i = 1 ; i <size;++i){
  int temp = a[i];
  int j=i-1;
   while(j>=0&&a[j]>temp){
    a[j+1]=a[j];
    --j;
   }
   a[j+1]=temp;
}
}

void Insertiondisplay(int arr[],int size){
  cout<<"The sorted data is : ";
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

  InsertionSort(a,n);
  cout<<endl<<endl<<endl;
  Insertiondisplay(a,n);
  return 0;
}


