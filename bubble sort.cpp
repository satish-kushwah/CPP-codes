#include <iostream>
using namespace std;
void bubblesort(int *x, int n);

main()
{int *x,n,i;
cout<<"how many int: ";
cin>>n; 
x=new int[n];

for(i=0;i<n;i++)
{cout<<i+1<<". element ";
cin>>x[i];
}

bubblesort(x,n);
cout<<"sorted array is \n";
for(i=0;i<n;i++)
cout<<x[i]<<endl;
}

void bubblesort(int *x, int n)
{int i,j,t;
for(i=0;i<(n-1);i++)
for(j=0;j<(n-i-1);j++)
{if(*(x+j)>*(x+j+1))
 {t=*(x+j+1); *(x+j+1)=*(x+j); *(x+j)=t; }
}
}
