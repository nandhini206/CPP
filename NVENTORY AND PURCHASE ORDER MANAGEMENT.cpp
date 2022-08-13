//INVENTORY AND PURCHASE ORDER MANAGEMENT

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
class CBills{
 private:
 char name[20];
 int qty;
 float price, net;
 public:
 void getdata();
 void modify(CBills *, int );
 void Remove(CBills *, int &);
 void Display() ;
 };
void CBills :: getdata()
{
 cout<<"\n Enter Item Name: ";
 cin>>name;
 cout<<"\n Enter Item Price: ";
 cin>>price;
 cout<<"\n Enter Item Quantity: ";
 cin>>qty;
 net = price * qty;
 }
void CBills :: modify(CBills *order, int no)
{
 char key[15];
 int i,j;
 cout<<"\n Enter the Item Name to modify: ";
 cin>>key;
 for(i=0;i<=no;i++)
 {
 if(strcmp(order[i].name, key) == 0)
 {
 cout<<"\n Enter Item Name: ";
 cin>>order[i].name;
 cout<<"\n Enter Item Price: ";
 cin>>order[i].price;
 cout<<"\n Enter Item Quantity: ";
 cin>>order[i].qty;
 order[i].net = order[i].price * order[i].qty;
 break;
 }
 cout<<"##################### item does not match############################# ";
 }
}
void CBills :: Remove(CBills *order, int &no){
 char key[15];
 int i,j;
 cout<<"\n Enter the Item Name to Remove: ";
 cin>>key;
 for( i=0; i<=no; i++){
 if(strcmp(order[i].name, key) == 0)
 {
 for(j=i; j<=no; j++)
 order[j] = order[j+1];
 no--;
 break;
 }
 cout<<"############################ no item exits ############################## ";
 }
}
void CBills :: Display() {
 cout<<"\n\t Item Name: "<<name;
 cout<<"\n\t Item Price: "<<price;
 cout<<"\n\t Item Quantity: "<<qty;
 cout<<"\n\t Net Price: "<<net;
 }
int main(){
 CBills bills[20], bl;
 int ch1, item_no = -1;
 char ch2;
 while(1){
 cout<<"\n GROCERRY SHOP";
 cout<<"\n ----------------";
cout<<"\n 1. Get Item Details.";
 cout<<"\n 2. Display Items.";
 cout<<"\n 3. modify an Item.";
 cout<<"\n 4. Remove an Item.";
 cout<<"\n 5. Exit.";
 cout<<"\n Enter your choice: ";
 cin>>ch1;
 switch(ch1){
 case 1:
 while(1)
 {
 item_no++;
 cout<<"\n Entry of Purchased Items.";
 cout<<"\n ------------------------";
 cout<<"\n Item No. "<<item_no+1;
 bills[item_no].getdata();
 cout<<"\n Do you want to add more(y/n): ";
 cin>>ch2;
 if(ch2 == 'n')
 break;
 }
 break;
 case 2:
 cout<<"\n Purchase Order Details.";
 cout<<"\n ------------------------";
 for(int i=0; i<=item_no; i++){
 cout<<"\n\n Item No.: "<<i+1;
 bills[i].Display();
 }
 break;
 case 3:
 bl.modify(bills, item_no);
 cout<<"\n\n Record Modified.";
 break;
 case 4:
 bl.Remove(bills, item_no);
 cout<<"\n\n Record Removed.";
 break;
 default:
 exit(1);
 }
 }
 }
