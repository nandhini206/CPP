/* WRITE A C++ PROGRAM TO CREATE AN EMPLOYEE CLASS
INCLUDING A NAME, NATIONAL INSURANCE NUMBER ETC,. SUPPOSE
THIS CLASS HAS TWO DERIVED CLASSES HOURLY EMPLOYEE AND
COMMISION EMPLOYEE, FOR PEOPLE PAID IN DIFFERENT WAYS AND
LATER WE’LL WANTED A CLASS FOR PEOPLE PAID BOTH HOURLY
AND BY COMMISSION. WHAT KIND OF INHERITANCE IS
APPROPRIATE? SKETCH THESE CLASSES, THEIR FIELDS AND
CONSTRUCTORS. */

#include<iostream>
using namespace std;
class employee
{
public:
 int INO;
 char name[100];
 employee()
 {
 cout<<"Enter Name Of The Employee:\n";
 cin>>name;
 cout<<"Enter National Insurance No of Employee:\n";
 cin>>INO;
 }
};
class Hourlyemployee:public employee
{
 public:
 void h()
 {
 cout<<"The Conditions For payment of hourly employee are:\n";
 cout<<"1 Hour:50\n2 Hours:100\n3 Hours:200\n4-Hours:450\n";
 cout<<"Bonus Amount Awarded For Perfect Work :150"<<endl;
 }
};
class Commissionemployee:public employee
{
public:
 void x()
 {
 cout<<"The conditions For Payment of Commission Employee are:\n";
 cout<<"Grade-1:7500\nGrade-2:5500\nGrade-3:3000\nGrade-4:1500\n";
 cout<<"Increment on each promotion:2000\n";
 }
};
class both:public Commissionemployee,public Hourlyemployee
{
public:
 both()
 {
 cout<<"The Condtions For Payment of Both Hourly And Commission Employee are:\n";
 cout<<"Grade"<<"\t"<<"Hours"<<"\t"<<"Rate"<<endl;
 cout<<"1"<<"\t"<<"4"<<"\t"<<"5680"<<endl;
 cout<<"2"<<"\t"<<"5"<<"\t"<<"4580"<<endl;
 cout<<"3"<<"\t"<<"5"<<"\t"<<"3500"<<endl;
 cout<<"4"<<"\t"<<"8"<<"\t"<<"2400"<<endl;
 }
};
int main()
{
 employee g;
 both y;
 y.h();
 y.x();
 return 0;
}
