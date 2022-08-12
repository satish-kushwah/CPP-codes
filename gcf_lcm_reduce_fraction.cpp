#include<iostream>
using namespace std;
int gcf(int number1,int number2){
if(number1<0 || number2<0)
return -1;
if(number2==0)
return number1;
else
return (gcf(number2,number1%number2));
}
int lcm(int number1,int number2){
return (number1*number2/(gcf(number1,number2)));
}
void reduceFraction(int numerator,int denominator){
int fgcf=gcf(numerator, denominator);
numerator=numerator/fgcf;
denominator=denominator/fgcf;
cout<<"reduced fraction is "<<numerator<<"/"<<denominator<<endl;
}
int main(){
int a,b;
cout<<"enter two natural numbers to find their gcf each number in new line ";
cin>>a>>b;
cout<<"gcf of "<<a<<" and "<<b<<" is "<<gcf(a,b)<<endl;
cout<<"enter two natural numbers to find their lcm each number in new line ";
cin>>a>>b;
cout<<"lcm of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<endl;
cout<<"to reduce fraction\nenter numerator ";
cin>>a;
cout<<"enter denominator ";
cin>>b;
reduceFraction(a,b);
return 0;
}