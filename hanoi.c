#include<stdio.h>


int toh(int n,char s,char t,char d)

{

if(n==1)
{

printf("\nMove disk %d from %c to %c \n",n,s,d);
return(0);

}

toh(n-1,s,d,t);

printf("\nMove disk %d from %c to %c \n",n,s,d);
toh(n-1,t,s,d);

return(0);

}


int main()

{

char s='A',d='C',t='B';

int n;

printf("\nEnter the number of disks:  ");

scanf("%d",&n);

printf("\nSequence of disks is:\n");

toh(n,s,t,d);

printf("\n");

return(0);

}
