#include <iostream>
using namespace std;
string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);

int main() {
int num;
string str;
cin >> num;
str = IntegerToReverseBinary(num);
cout << ReverseString(str);
printf("\n");
system("pause");
return 0;
}

string IntegerToReverseBinary(int integerValue){
  string result="";
while (integerValue > 0) {
  result += (char)('0' + (char)(integerValue % 2));
  integerValue /= 2;
 }
 return result;
}

string ReverseString(string userString) {
  string result="";
for (int i = userString.size() - 1; i >= 0; --i) {
 result += userString[i];
}
return result;
}