#include <iostream>
using namespace std;
int main() {
  
double price;
double quantity;
int choice;
cout << "============Restaurant Menu============="<<endl;
cout << "(1) Burger ,80$" << endl;
cout << "(2) pizza,50$" << endl;
cout << "(3) fries,40$" << endl;
cout << "(4) shawarma,110$" << endl;
cout << "===================================================\n";
cout << "your choice??\n";
cin >> choice;
switch (choice) {
  
case 1:
cout << "you choose burger" << endl;
price = 80;
break;
  
case 2:
cout << "you choose pizza " << endl;
price = 50;
break;
  
case 3:
cout << "you choose fries" << endl;
price = 40;
break;
  
case 4:
cout << "you choose shawarma\n";
price = 110;
break;
  
default:
cout << "not existed in menu\n";
break;
}
  
cout << "please enter the quantity\n";
cin >> quantity;

int total;
total = quantity * price;
cout << "---------------------------------------" << endl;
cout << "total is :" << total << endl;
cout<<"thank you! \n";

return 0;
}
cout << "thank you\n"
