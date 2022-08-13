/*WTITE A C++ PROGRAM TO EXECUTE THE ELECTION. AN ELECTION
IS CONTESTED BY FIVE CANDIDATES. THE CANDIDATES ARE
NUMBERED 1 TO 5 AND A VOTING IS DONE BY MAKING THE
CANDIDATE NUMBER IN THE BALLOT PAPER. READ THE BALLOT
AND COUNT THE VOTES AND CAST FOR EACH CANDIDATE USING AN
ARRAY VARRIABLE COUNT. IN CASE, A NUMBER READ IS OUTSIDE
THE RANGE 1 TO 5 THE BALLOT SHOULD BE CONSIDERED AS A
‘SPOILT BALLO, AND THE PROGRAM AHOULD ALSO COUNT THE
NUMBER OF SPOILT BALLOTS. */

#include<iostream>
using namespace std;
int main()
{
 int vote,C1=0,C2=0,C3=0,C4=0,C5=0,SC=0,s[4],i;
 for(i=0;i<4;i++)
 {
 cout<<"--------CANDIDATES STANDING FOR THE ELECTION----------"<<endl;
 cout<<"1.aaaa\n2.bbbb\n3.cccc\n4.dddd\n5.eeee "<<endl;
 cout<<endl;
 cout<<"Please enter the candidate number(the serial number itself) to cast your vote:"<<endl;
 cin>>vote;
 switch(vote)
 {
 case 1:
 cout<<"Vote casted. Thank you for being a responsible citizen."<<endl;
 C1++;
 break;
 case 2:
 cout<<"Vote casted. Thank you for being a responsible citizen."<<endl;
 C2++;
 break;
 case 3:
 cout<<"Vote casted. Thank you for being a responsible citizen."<<endl;
 C3++;
 break;
 case 4:
 cout<<"Vote casted. Thank you for being a responsible citizen."<<endl;
 C4++;
 break;
 case 5:
 cout<<"Vote casted. Thank you for being a responsible citizen."<<endl;
 C5++;
 break;
 default:
 cout<<"Vote casted. Thank you for being a responsible citizen."<<endl;
 SC++;
 break;
 }
 }
 cout<<"Votes of candidate 1="<<C1<<endl;
 cout<<"Votes of candidate 2="<<C2<<endl;
 cout<<"Votes of candidate 3="<<C3<<endl;
 cout<<"Votes of candidate 4="<<C4<<endl;
 cout<<"Votes of candidate 5="<<C5<<endl;
 cout<<"Spoilt ballot votes="<<SC<<endl;
 return 0;
}
