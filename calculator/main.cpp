
#include<iostream>
using namespace std;
int main() {
double num1, num2;
char op;
cout << "please enter first number"<<endl;
cin >> num1;
cout << "please enter the operation"<<endl;
cin >> op;
cout << "please enter second number" << endl;
cin >> num2;
switch (op) {
  
case'+':
cout << "result is :" << num1 + num2 << endl;
break;
  
case'-':
cout << "result is :" << num1 -num2 << endl;
break;
  
case'*':
cout << "result is " << num1 * num2 << endl;
break;
  
case'/':
if (num2 == 0) {
cout << "cannot divide by zero"<<endl;
}
else {
cout << "result is :" << num1 / num2 << endl;
}
break;
  
default:
cout << "Invalid operator " << endl;
break;

  
}
}
