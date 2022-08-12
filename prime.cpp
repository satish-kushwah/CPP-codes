#include "iostream"
#include "cmath"
using namespace std; 
// return 1 if number is prime else 0
int isPrime(int n){
    // for(int i=2; i<=(int)n/2; ++i)  // simple version
    for(int i=2; i<=(int)sqrt(n); ++i) 
        if(n%i==0)
            return 0;    
    // 1 is not prime
    if(n==1)
        return 0;
    // if number do not have any factor
    return 1;
}
int main(){   
    int x,res;
    while(1){
        cout<<"enter number to check if it is prime, 0 to exit: ";
        cin>>x;
        if(x==0)
            break;
        res=isPrime(x);
        if(res)
            cout<<"prime"<<endl;
        else
            cout<<"not prime"<<endl;
    }
    printf("\n");
    // system("pause");
    return 0;
}