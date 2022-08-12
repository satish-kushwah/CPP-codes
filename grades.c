#include "stdio.h"
int main(){
	int n,grades[10],i,g,j,temp;
	printf("Welocme to the Grade Calculator\n\n");
	while(1){
		printf("Enter the number of grades to process (0-100): ");
		scanf("%d",&n);
		if(n<=10 && n>=0)
			break;
		else{
			printf("\n*** Invalid number of grades entered. ***\n\n");
		}
	}
	while(i<n){
		printf("Enter grade for student #%d: ", i+1);
		scanf("%d",&g);
		if(g>=0 && g<=100){
			grades[i]=g;
			i++;
		}else{
			printf("\n*** Invalid grade entered. Please enter 0 - 100. ***\n\n");
		}
	}
	for(i=0;i<(n-1);i++)
		for(j=0;j<(n-1-i);j++){
			if(grades[j]>grades[j+1]){
				temp=grades[j];
				grades[j]=grades[j+1];
				grades[j+1]=temp;
			}
		}
	printf("The minimum grade is %d\n",grades[0] );
	printf("The maximum grade is %d\n",grades[n-1] );
	float sum=0;
	for (int i = 0; i < n; ++i)
		sum=sum+grades[i];
	printf("The class average is %.2f\n",sum/n );
	printf("\nThe %d grades entered are :\n\n", n);
	for(i=0;i<n;i++)
		printf("%d, ",grades[i] );
	return 0;
}