#include "iostream"
#include "cmath"
#include "sstream" 
using namespace std; 

double mysqrt(double x){
    double lt,rt,mid;
    const double ERR=1E-10;
    if(x==0 || x==1) //base case
        return(x);
    if(x>0 && x<1){
        lt=0; rt=1;
    }
    else if(x>1){
        lt=1; rt=x;
    }
    while(fabs(rt-lt)>ERR){
        mid=(rt+lt)/2;
        if((mid*mid)>x)
            rt=mid;
        else
            lt=mid;
    }
    return(mid);
}
int main(){   
    string x;
    while(1){
        cout<<"Enter a non-negative real number to compute the squre root: ";
        cin>>x;
        if(x=="q")
            break;
        else{
            stringstream strstream(x); 
            double x; 
            strstream >> x; 
            cout<<"  sqrt("<<x<<")"<<" = "<<sqrt(x)<<endl;
            cout<<"mysqrt("<<x<<")"<<" = "<<mysqrt(x)<<endl;
        }
    }
    return 0;
}