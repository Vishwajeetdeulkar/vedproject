#include<iostream>
//#include<conio.h>

using namespace std;
enum itsaWord {NO,YES};

int main()
{
itsaWord isword=NO;

char ch='a';
int wordcount=0;

cout << "Enter the phrase and to end phrase enter '$' sign:\n";
do{
  ch=getche();
  if(ch==' ' || ch=='\r')
   {
   if(isword == YES)
    {
    wordcount++;
    isword=NO;
    }
  }
  else
   if(isword==NO)
    {
    isword=YES;
    }
  }while(ch!='\r');
 cout << "Count of words is: " << wordcount;
return 0;
}
