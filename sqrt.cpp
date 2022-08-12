#include "iostream"
using namespace std; 

double mysqrt(double n){
    double e = 0.0001; //define the precision of your result
    double guess = n/2; //first guess
    while (((guess - n / guess)/2) > e){
        guess = (guess + n / guess) / 2;
    }
    return guess;
}
int main(){ 
    double n; 
    cout<<"enter no to get sqrt : ";
    cin>>n; 
    cout<<mysqrt(n);
    printf("\n");
    system("pause");
    return 0;
}