#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std; 

int main(){  
	int n;
	double fib,sqrt5,Phi,phi;
	sqrt5=sqrt(5);
	Phi=(1+sqrt5)/2; phi=(1-sqrt5)/2;
	while(1){ 
		cout<<"enter n to get nth fibonacci number: ";
	    cin>>n;
	    fib=(pow(Phi,n)-pow(phi,n))/sqrt5;
	    fib+=0.5;
	    cout<<setw(10)<<(unsigned long int)fib<<endl;
	}
    return 0;
    printf("\n");
    system("pause");
}