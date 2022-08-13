//FIBONACCI SERIES USING CONSTRUCTORS

#include<iostream>
using namespace std;
class fibonacci
{
 int n,a,b;
public:
 fibonacci()
 {
 a=0;
 b=1;
 }
 void getlim()
 {
 cout<<"enter the limit until which you want to calculate the series"<<endl;
 cin>>n;
 }
 void calculate()
 {
 int c;
 cout<<"the series is:"<<endl;
 cout<<a<<" "<<b<<" ";
 for(int i=0;i<n;i++)
 {
 c=a+b;
 a=b;
 b=c;
 cout<<c<<" ";
 }
 cout<<endl;
 }
};
int main()
{
 fibonacci f;
 f.getlim();
 f.calculate();
 return 0;
}
