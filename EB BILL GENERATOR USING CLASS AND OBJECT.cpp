//EB BILL GENERATOR USING CLASS AND OBJECT

#include<iostream>
using namespace std;
class bill
{
 int unit,amt;
public:
 void getdt()
 {
 cout<<"enter the no of units used: ";
 cin>>unit;
 if(unit<=100)
 {
 cout<<"\nthe amount is:";
 amt=unit+100;
 cout<<amt;
 }
 else if(unit>100 && unit<=200)
 {
 cout<<"\nthe amount is:";
 amt=unit+150;
 cout<<amt;
 }
 else if(unit>200)
 {
 cout<<"unit is greater than 200";
 cout<<"pay fine 1000 rupees";
 cout<<"\nso the amount is:";
 amt=unit+1000;
 cout<<amt;
 }
 }
 void showdt()
 {
 cout<<"\n"<<"unit"<<"\t"<<"amt"<<"\n";
 cout<<unit<<"\t"<<amt<<"\n";
 }
};
int main()
{
 bill eb[3];
 int i;
 for(i=0;i<3;i++)
 {
 eb[i].getdt();
 eb[i].showdt();
 }
}
