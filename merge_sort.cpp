//merge sort
#include "iostream"
#include "fstream"
using namespace std;

void merge(int *a, int low, int mid, int high) { 
   int l1, l2, i, *b;
   b=new int[high-low+1]; //temp array
   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
      }
   while(l1 <= mid)    
      b[i++] = a[l1++];
   while(l2 <= high)   
      b[i++] = a[l2++];
   for(i = low; i <= high; i++)
      a[i] = b[i];
   delete b; //freeing temp array memory
   }

void mergesort(int *a, int low, int high) {
   int mid;
   if(low<high) {
      mid=(low+high)/2;
      mergesort(a,low,mid);
      mergesort(a,mid+1,high);
      merge(a,low,mid,high);
      }
   else 
      return;    
   }

int main() {
   int n,i,*a;
   // string myf;
   // cout<<"enter file name to sort: ";
   // cin>>myf;
   // ifstream infile;
   // infile.open(myf);
   // infile>>n;
   cin>>n;
   a=new int[n];
   // b=new int[n];
   cout<<"reding "<<n<<" numbers\n";
   for (i = 0; i < n; ++i)
      // infile>>a[i];
      cin>>a[i];
   // infile.close();
   mergesort(a,0,n-1);
   // ofstream outfile;
   // outfile.open("mysort.txt");
   cout<<"priting sorted\n";
   for ( i = 0; i < n; ++i)
      // outfile<<a[i]<<endl;
      cout<<a[i]<<endl;
   // outfile.close();
   return 0;
   }