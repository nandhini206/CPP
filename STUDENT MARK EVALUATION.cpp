//STUDENT MARK EVALUATION

#include<iostream>
using namespace std;
class person
{
public:
 string sname;
};
class student : public person
{
public:
 int marks[5];
 int total;
 int tmax;
 student()
 {
 total=0;
 }
 void assign()
 {
 cout<<"Enter name";
 cin>>sname;
 for(int i=0;i<5;i++)
 {
 cout<<"Enter marks:";
 cin>>marks[i];
 }
 }
 void compute()
 {
 for(int i=0;i<5;i++)
 {
 total+=marks[i];
 }
 }
 void display()
 {
 cout<<"name"<<sname;
 for(int i=0;i<5;i++)
 {
 cout<<marks[i]<<endl;
 }
 cout<<"total->"<<total<<endl;
 cout<<"average->"<<total/5<<endl;
 }
};
int main()
{
 int i;
 student s[3];
 for(i=0;i<3;i++)
 {
 s[i].assign();
 s[i].compute();
 s[i].display();
 }
 return 0;
}
