#include "iostream"
using namespace std; 

float StringToFlo(string x){
    float intPart=0,floatPart=0,strToFloat,multiplier=10;
    int length,flag=0;
    length=x.length();
    for(int i=0; i<length; ++i) {
        if(x[i]=='.'){
            multiplier=0.1;
            flag=1;
            continue;
        }
        if(flag==0){
            intPart=intPart*multiplier + (x[i]-'0');
        }
        else if(flag==1){
            floatPart=floatPart + (x[i]-'0')*multiplier;
            multiplier=multiplier*0.1;
        }
    }
    strToFloat=intPart+floatPart;
    return(strToFloat);
}

int main(){   
    string str;
    float f;
    cout<<"Enter string: ";
    cin>>str;
    f=StringToFlo(str);
    cout<<"The string \""<<str<<"\" becomes the float "<<f<<endl;
    cout<<"Enter string: ";
    cin>>str;
    f=StringToFlo(str);
    cout<<"The string \""<<str<<"\" becomes the float "<<f<<endl;

    return 0;
}