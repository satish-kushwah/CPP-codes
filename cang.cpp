//to calculate angle btwn hour and min hand
#include <iostream>
#include <cmath>
using namespace std;

main()
{float h,m,ang;
string timeString, minute, hour;
cout<<"enter time in hh-mm ";
scanf("%f-%f",&h,&m);
h=.5*(h*60+m); 
while(h>=360) h=h-360;
m=6*m; 
while(m>=360) m=m-360;
ang=m-h; 
ang=sqrt(ang*ang);
while(ang>180) ang=360-ang;

cout<<"Angle is "<<ang<<" degree";
}