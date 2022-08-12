//log for any base
#include<iostream>
#include<cmath>
using namespace std;

int main()
{float n,p=0.0,i=0.0001,b; int c; 
cout<<"enter base of log: 1 for 10, 2 for e, any key for other ";
cin>>c;
if(c!=2&&c!=1)
{cout<<"enter base of log: ";
cin>>b;}
else {if(c==1) b=10.0;
      else b=2.71828;
     }
if(b<=1)
{cout<<"this base not allowewd \n"; return 0;}
cout<<"enter nu to get log on "<<b<<" base ";
cin>>n;
if(n<1)
{cout<<"this number not allowewd\n"; return 0;}
while(pow(b,p)<n)
{p++;
 if(pow(b,p)>n)
   {p=p-1; break;}
 else if(pow(b,p)==n)
   {p=p;break;}
}
while(1)
 {p=p+i;
  if(pow(b,p)>n)
   {p=p-i; break;}
  else if(pow(b,p)==n)
   {p=p; break;	}
 }
//printf("log%g,%g=%g\n",b,n,p);
cout<<"\nlog"<<n<<"(base "<<b<<")="<<p<<endl;
}
