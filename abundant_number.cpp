#include "iostream"
// #include "stdio.h"
using namespace std;
int main()
{
	// unsigned int n1=0,n2=0,n3=0;
	// int a1=0,a2=0,a3=0;
	int num_abundant=0;
	cout<<"Enter a sequance of natural numbers, separated by spaces, ";
	cout<<"and ending with 0."<<endl;

	int all_num[1000]; //assuming max numbers in sequance 1000, as mot provided in question
	int x,i=0,j,sum,t;
	int all_abundant[1000][2];

	while(1){
		cin>>x;
		if(x==0){
			all_num[i]=x;
			break;
			}
		else{
			all_num[i]=x;
			i=i+1;
			}
		}

	for(i=0;all_num[i]!=0;i=i+1){
		sum=0;
		for(j=1;j<=int(all_num[i]/2);j=j+1){
			if(all_num[i]%j==0)
				sum=sum+j;
			}
		if(sum>all_num[i]){
			all_abundant[num_abundant][0]=all_num[i];
			all_abundant[num_abundant][1]=sum;
			num_abundant=num_abundant+1;
			}
		}

		for(i=0;i<num_abundant-1;++i)
			for(j=0;j<num_abundant-i-1;++j){
					if(all_abundant[j][1]<all_abundant[j+1][1]){
						t=all_abundant[j][1]; all_abundant[j][1]=all_abundant[j+1][1]; all_abundant[j+1][1]=t;
						t=all_abundant[j][0]; all_abundant[j][0]=all_abundant[j+1][0]; all_abundant[j+1][0]=t;
					}
			}
			/*
		n1=all_abundant[0][0]; a1=all_abundant[0][1]; 
		n2=all_abundant[1][0]; a2=all_abundant[1][1]; 
		n3=all_abundant[2][0]; a3=all_abundant[2][1]; 
		*/
	cout<<"Abundant number count: "<<num_abundant<<endl;
	for (int i = 0; i < num_abundant; ++i)
	{
		cout<<all_abundant[i][0]<<' '<<all_abundant[i][1]<<endl;
	}
	/*
	cout<<"Top 3 most abundant numbers: "<<endl;
	cout<<n1<<" : "<<a1<<endl;
	cout<<n2<<" : "<<a2<<endl;
	cout<<n3<<" : "<<a3<<endl;
*/
	return 0;
}

	
	