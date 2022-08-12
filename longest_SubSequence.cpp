#include<iostream>
using namespace std;

int maxlen(int a[],int n){
   int maxl=1,cl=0,t=0,c=a[0];
   for(int i=0;i<n;i++){
      if(a[i]==c)
       {cl=cl+1;
        if(cl>maxl) maxl=cl;
        }
      else if(a[i]!=c){
         if(cl>maxl)
           maxl=cl;
         cl=1;
         c=a[i];
      }
    }
    
   return maxl;
   
  }
int main(){
    int *a,n,l;
    cout<<"how many numbers in array ";
    cin>>n;
    a=new int[n];
    cout<<"enter numbers each in new line ";
    for(int i=0;i<n;i++)
      cin>>a[i];
    l=maxlen(a,n);
    cout<<"longest sequence is "<<l;
return 0;
}