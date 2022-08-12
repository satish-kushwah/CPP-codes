//check primes upto
#include<iostream>
#include<cmath>
using namespace std;
main()
{   int *x,j,i,n;
	cout<<"check prime upto: ";
	cin>>n; 
	x=new int[n];
	for(i=0;i<=(n-2);i++)
		x[i]=i+2;
	for(i=0;i<=pow(n,.5);i++)
	{if(x[i]==0) continue;
		for(j=2;j<=n/(2+i);j++)
			x[(i+2)*j-2]=0;
	}
	cout<<"upto "<<n<<" primes are\n";
	for(i=0;i<n;i++)
		if(x[i]!=0)
			cout<<x[i]<<endl;
}
