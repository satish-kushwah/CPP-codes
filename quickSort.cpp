#include "iostream"
using namespace std; 
//quick sort
int partition(int *A, int p, int r){
  int i,j,temp;
  i=p-1;
  for (j=p; j<r; j++){
    if (A[j]<A[r]){
      i=i+1;
      temp=A[j]; A[j]=A[i]; A[i]=temp;
    }
  }
  i=i+1;
  temp=A[r]; A[r]=A[i]; A[i]=temp;
  return(i);
}
void quick_sort(int *A,int p,int r){
  int q;
  if(p<r){
    q=partition(A,p,r);
    quick_sort(A,p,q-1);
    quick_sort(A,q+1,r);
  }
}
//driver code
int main(){   
    int n,*arr;
    cout<<"Enter total number of integers to sort: ";
    cin>>n;
    arr=new int[n];
    cout<<"Enter integers seperated by spaces: ";
    for(int i=0; i<n; ++i) {
       cin>>arr[i];   
    }
    quick_sort(arr,0,n-1);
    cout<<"array sorted\n";
    for(int i=0; i<n; ++i) {
       cout<<arr[i]<<" ";   
    }
    return 0;
}