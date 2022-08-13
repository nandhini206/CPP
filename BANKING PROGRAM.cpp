//BANKING PROGRAM

#include<iostream>
#include<string.h>
using namespace std;
class bankdetails
{
 public:
int balance,id;
char name[20];
};
class details:public bankdetails
{
public:
int j;
void getdetails()
{
 int j=0;
cout<<"enter the name";
cin>>name;
cout<<"enter the id";
cin>>id;
cout<<"enter the account balance";
cin>>balance;
j++;
}
void display()
{ cout<<name<<"\t"<<id<<"\t\t"<<balance<<"\n";
}
void deposit()
{
int i;
cout<<"enter the amount u goig to deposit";
cin>>i;
balance+=i;
cout<<balance<<"\n";
}
void withdrawl()
{
int i;
cout<<"enter amount going to take";
cin>>i;
balance-=i;
cout<<balance<<"\n";
}
void search1()
{
char name1[20];
cout<<"name of acc:";
cin>>name1;
if(name1[20]==name[20])
{
cout<<"yes"<<endl;
}
else
{
cout<<"not"<<endl;
}
}
void x(bankdetails s)
{
cout<<s.name<<"\t"<<s.id<<"\t"<<s.balance<<"\n";
}
};
int main()
{
details a;
int c=0;
while(c!=5)
{ cout<<"enter the choice\n1.open account\n2.deposit\n3.withdraw\n4.serach\n5.exit";
cin>>c;
switch(c)
{
case 1:
a.getdetails();
break;
case 2:
a.deposit();
break;
case 3:
a.withdrawl();
break;
case 4:
a.search1();
break;
case 5:
return 0;
}
}
cout<<"name"<<"\t"<<"id"<<"\t"<<"account balance"<<"\n";
a.display();
return 0;
}
