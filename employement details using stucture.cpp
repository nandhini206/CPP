/* WRITE A C++ PROGRAM IN CREATING A STRUCTURE CALLED
EMPLOYEE WITH THE FOLLOWING DETAILS AS VARIABLES WITHIN
IT. 1.NAME OF THE EMPLOYEE 2.AGE 3.DESIGNATION 4.SALARY.
CREATE ARRAY OF OBJECTS FOR THE STRUCTURE TO ACCESS
THESE AND PRINT THE NAME ,AGE ,DESIGNATION AND SALARY. */

#include<iostream>
using namespace std;
struct employee
{
 int age;
 float salary;
 char name[20];
 char des[20];
}s[3];
int main()
{
 int i;
 for(i=0;i<3;i++)
 {
 cout<<"ENTER NAME OF THE EMPLOYEE: \n";
 cin>>s[i].name;
 cout<<"ENTER AGE OF THE EMPLOYEE: \n";
 cin>>s[i].age;
 cout<<"ENTER DESIGNATION OF THE EMPLOYEE: \n";
 cin>>s[i].des;
 cout<<"ENTER SALARY OF THE EMPLOYEE: \n";
 cin>>s[i].salary;
 }
 cout<<"\n NAME\tAGE\tDESIGNATION\tSALARY"<<endl;
 for(i=0;i<3;i++)
 cout<<s[i].name<<"\t"<<s[i].age<<"\t"<<s[i].des<<"\t"<<s[i].salary<<endl;
 return 0;
}
