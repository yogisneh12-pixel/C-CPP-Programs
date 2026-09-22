#include<stdio.h>
 int main()
 {
 	
 	int arr[3][4];
 	int base, i,j;
 	int size=0;
 	 printf("enter row index");
 	 scanf( "%d",&i);
 	 printf("enter column index"); 
 	 scanf("%d",&j);
 	 base=(int) & arr[0][0];
 	 printf("base address%d\n",base);
 	 printf("actual address%d\n",(int)&arr[i][j]);
 	 printf("threotical address%d\n",base+((i*4)+j)*size of(int));
 	 return 0;
 }
 
