#include<stdio.h>
int TOH(int n,char s, char d , char m )
{ 
if (n==1)
 { printf("move disk 1 from tower %c to tower % c \n",s,d);
return 0;
 }
TOH(n-1,s,m,d);
	printf("move disk %d from tower %c to tower % c \n",n,s,d);
TOH(n-1,m,d,s);
}
int main()
{int n=3;
TOH(n,'A','C','B');
} 
