/*FIND AREA AND VOLUME OF THREE 2D & 3D SHAPES USING FUNCTION
OVERLOADING*/

#include<iostream>
using namespace std;
int area(int,int);
int area(int);
double area(double);
int volume(int);
int volume(int,int,int);
double volume(double);
int main()
{
 cout<<"the area of rectangle:"<<area(5,6)<<endl;
 cout<<"the area of square:"<<area(4)<<endl;
 cout<<"the area of circle:"<<area(1.5)<<endl;
 cout<<"the volume of cube:"<<volume(3)<<endl;
 cout<<"the volume of cuboid:"<<volume(4,5,6)<<endl;
 cout<<"the volume of sphere:"<<volume(2.5)<<endl;
 return 0;
}
 int area(int a,int b)
 {
 return a*b;
 }
 int area(int a)
 {
 return a*a;
 }
 double area(double a)
 {
 return 3.14*a*a;
 }
 int volume(int a)
 {
 return a*a*a;
 }
 int volume(int a,int b,int c)
 {
 return a*b*c;
 }
double volume(double a)
{
 return 1.3333*3.14*a*a*a;
}
