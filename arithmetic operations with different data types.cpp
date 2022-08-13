//PERFORM THE ARITHMETIC OPERATIONS WITH DIFFERENT DATA TYPES

#include<iostream>
#include<string>
using namespace std;
int main()
{
 int n,choice;
 cout<<"Enter datatype:\n1.int\n2.float\n3.double\n4.char"<<endl;
 cin >> n;
 switch(n)
 {
 case 1:
 {
 int a,b,c;
 cout << "Enter two numbers: ";
 cin >> a >> b;
 cout<<"Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
 cin >> choice;
 switch(choice)
 {
 case 1:
 {
 c = a + b;
 cout << "The addition of " << a << " and" << b << " is " << c;
 break;
 }
 case 2:
 {
 c = a - b;
 cout << "The difference of " << a << " and" << b << " is " << c;
 break;
 }
 case 3:
 {
 c = a * b;
 cout << "The multiplication of " << a << " and" << b << " is " << c;
 break;
 }
 case 4:
 {
 c = a / b;
 cout << "The division of " << a << " and" << b << " is " << c;
 break;
 }
 default:
 cout << "Wrong input in choice! Enter numbers from 1 to 5";
 }
 }
 break;
 case 2:
 {
 float a,b,c;
 cout << "Enter two numbers: ";
 cin >> a >> b;
 cout<<"Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
 cin >> choice;
 switch(choice)
 {
 case 1:
 {
 c = a + b;
 cout << "The addition of " << a << " and" << b << " is " << c;
 break;
 }
 case 2:
 {
 c = a - b;
 cout << "The difference of " << a << " and" << b << " is " << c;
 break;
 }
 case 3:
 {
 c = a * b;
 cout << "The multiplication of " << a << " and" << b << " is " << c;
 break;
 }
 case 4:
 {
 c = a / b;
 cout << "The division of " << a << " and" << b << " is " << c;
 break;
 }
 default:
 cout << "Wrong input in choice! Enter numbers from 1 to 5";
 }
 }
 break;
 case 3:
 {
 double a,b,c;
 cout << "Enter two numbers: ";
 cin >> a >> b;
 cout<<"Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
 cin >> choice;
 switch(choice)
 {
 case 1:
 {
 c = a + b;
 cout << "The addition of " << a << " and" << b << " is " << c;
 break;
 }
 case 2:
 {
 c = a - b;
 cout << "The difference of " << a << " and" << b << " is " << c;
 break;
 }
 case 3:
 {
 c = a * b;
 cout << "The multiplication of " << a << " and" << b << " is " << c;
 break;
 }
 case 4:
 {
 c = a / b;
 cout << "The division of " << a << " and" << b << " is " << c;
 break;
 }
 default:
 cout << "Wrong input in choice! Enter numbers from 1 to 5";
 }
 }
 break;
 case 4:
 {
 char a,b,c;
 cout << "Enter two numbers: ";
 cin >> a >> b;
 cout<<"Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
 cin >> choice;
 switch(choice)
 {
 case 1:
 {
 c = a + b;
 cout << "The addition of " << a << " and" << b << " is " << int(a+b);
 break;
 }
 case 2:
 {
 c = a - b;
 cout << "The difference of " << a << " and" << b << " is " << int(a-b);
 break;
 }
 case 3:
 {
 c = a * b;
 cout << "The multiplication of " << a << " and" << b << " is " << int(a*b);
 break;
 }
 case 4:
 {
 c = a / b;
 cout << "The division of " << a << " and" << b << " is " << int(a/b);
 break;
 }
 default:
 cout << "Wrong input in choice! Enter numbers from 1 to 5";
 }
 }
 break;
 return 0;
 }
}
