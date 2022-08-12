#include <iostream>
using namespace std;

int main()
{long long int c,d,l,t,i;
 cin>>t;
 for (i = 0; i < t; i++)
 { cin>>c>>d>>l;
  if(l%4==0)
   {
   if( c<=(2*d) && l>=(4*d) && l<=((c+d)*4)  ) 
   	  cout<<"yes"<<endl;
   else if( c>(2*d) && l>=((c-d)*4) && l<=((c+d)*4) )
   	  cout<<"yes"<<endl; 
   else cout<<"no"<<endl;
   }  
   else cout<<"no"<<endl;
 }
 return 0;
}
