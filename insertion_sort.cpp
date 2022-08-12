// insertion sort
#include "iostream"
#include "fstream"
using namespace std;

main()
{int n,i,*intArray,t,j;
 ifstream infile;
 infile.open("myfile.dat");
 infile>>n;
 intArray= new int[n];
 for(i=0;i<n;i++)
 	infile>>intArray[i];
 infile.close();
 for(i=1;i<n;i++)
 	{if(intArray[i-1]>intArray[i])
 		for(j=i;j>0;j--)
 		{if(intArray[j-1]<intArray[j])
 			break;
 	     else {	 t=intArray[j-1];
		 		 intArray[j-1]=intArray[j];
		 		 intArray[j]=t;
		 	  }
 	    }
 	}	
ofstream outfile;
outfile.open("mysort.dat");
for(i=0;i<n;i++)
outfile<<intArray[i]<<endl;
outfile.close();
}