//DISPLAY ALL LEAP YEARS BETWEEN TWO GIVEN RANGES

#include<iostream>
using namespace std;
int main()
{
 int a,n,i,k=0;
 cout<<"\" Printing Leap Years between a range. \""<<endl<<endl;
 cout<<"What is the starting year ? "<<endl;
 cin>>a;
 cout<<"What is the ending year ? "<<endl;
 cin>>n;
 cout<<endl;
 cout<<"Leap Years between "<<a<< " to "<<n<<" are :"<<endl;
 for(i=a;i<=n;i++)
 if(((i%400==0) || (i%100 !=0)) && ( i%4==0))
 {
 cout<<i<<" ";
 k++;
 }
 if(k==0)
 {
 cout<<0<<endl;
 cout<<"It means there is no leap years between "<<a<<" to "<<n;
}
}
