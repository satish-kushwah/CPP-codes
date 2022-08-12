//selection sort
#include <iostream>
using namespace std;

main()
{int t,*x,i,j,n,largest;
cout<<"how many int: ";
cin>>n;  
x=new int[n];

for(i=0;i<n;i++)
{
cout<<i+1<<". element ";
cin>>x[i];
}

for(i=0;i<n;i++)
{   largest=0;
	for(j=1;j<(n-i);j++)
	{  
	  if(*(x+j)>*(x+largest)) largest=j; 
	}
	 t=*(x+n-1-i); *(x+n-1-i)=*(x+largest); *(x+largest)=t;
}

cout<<"sorted array\n";
for(i=0;i<n;i++)
cout<<x[i]<<endl;
}