//input two int array, merge and sort
#include <iostream>
using namespace std;

main()
{int *x,*y,*z,i,j,n1,n2,t;

cout<<"how many int in 1st array ";
cin>>n1;  
x=new int[n1];
cout<<"how many int in 2nd array ";
cin>>n2;
y=new int[n2];
z=new int[n1+n2];

for(i=0;i<n1;i++)
{cout<<i+1<<". element of 1st array ";
cin>>x[i]; 
z[i]=x[i];
}

for(i=0;i<n2;i++)
{cout<<i+1<<". int of 2nd array ";
cin>>y[i]; 
z[n1+i]=y[i];
}

for(i=0;i<(n1+n2-1);i++)
for(j=0;j<(n1+n2-i-1);j++)
{if(*(z+j)>*(z+j+1))
{t=*(z+j+1); *(z+j+1)=*(z+j); *(z+j)=t;}
}

cout<<"sorted array\n";
for(i=0;i<(n1+n2);i++)
cout<<z[i]<<endl;
}
