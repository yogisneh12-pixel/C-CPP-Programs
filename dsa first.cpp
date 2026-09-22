#include<stdio.h>
#define size 5

 int top = -1;
 int stack[size];
 int push (int x)
 
 {
 	if(top==size-1)
 	{
 		printf(" stack overflow ");
	 }
	 else 
	 {
	 	top++;
	 	stack[top]=x;
	 	printf(" element inserted in stack ");
	 }
 } 
 
   int pop()
   { 
  
    int x;
  
  	if(top==-1)
  	{
  		printf(" stack underflow ");
	  }
	  else
	  {
	  	x=stack[top];
	  	top--;
	  	printf(" element deleted in stack ");
	  	return x; 
	  }
  } 
  void display()
  { 
  	int i;
  	if(top==-1)
  	{
	  printf(" stack empty ");
	  }
	  else
	  {
	  	for(i=top; i>=0;i--)
	  	{
	  		printf(" elements of stack=%d\n",stack[i]);
		  }
	  }
  }
  int main()
  { 
  push(10);
  push(20);
  pop();
  display();
  pop();
  display();
  }
  
  

