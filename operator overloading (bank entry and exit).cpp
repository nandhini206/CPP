/* WRITE A C++ PROGRAM TO COUNT THE NUMBER OF PERSONS
INSIDE A BANK,BY INCREASING COUNT WHATEVER A PERSON
ENTERS A BANK,USING AN INCREMENT(++) OPERATOR
OVERLOADING FUNCTION,AND DECREASE THE COUNT WHENEVER A
PERSON LEAVES THE BANK USING A DECREEMENT(--) OPERATOR
OVERLOADING FUNCTION INSIDE A CLASS. */

#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
public:
 int count;
 A()
 {
 count=0;
 }
 A operator++()
 {
 count++;
 }
 A operator--()
 {
 count--;
 }
 void display()
 {
 cout<<"NO OF PERSONS INSIDE THE BANK = "<<count<<endl;
 }
};
int main()
{
 A a;
 int ch;
 do
 {
 cout<<"WELCOME TO OUR BANK\nPRESS 1 IF YOU'RE ENTERING \nPRESS 2 IF
YOUR'RE EXITING \nPRESS 3 TO SEE THE COUNT \nPRESS 4 TO EXIT\n";
 cin>>ch;
 switch(ch)
 {
 case 1:
 ++a;
 break;
 case 2:
 --a;
 break;
 case 3:
 a.display();
 break;
 case 4:
 exit(0);
 }
 }while(ch!=4);
}
