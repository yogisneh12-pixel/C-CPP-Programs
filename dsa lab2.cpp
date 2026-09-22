#include<stdio.h> 
#define max 5
int stack[max];
int top=-1;
void push()
{
	int x;
	if(top==max-1)
	printf("stack overflow\n");
	else 
	{
		printf("enter element\n");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	printf("stack underflow\n");
	else
	{
		printf("delete element=%d",stack[top]);
		top--;
	}
} 
void display()
{
	int i;
	if(top==-1)
	printf("stack empty\n");
	else
	{
		printf("stack element\n");
		for(i=top;i>=0;i--)
		printf("%d",stack[i]);
	}
}
int main()


{
	int ch;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			display;
			break;
			case 4:
			return 0;
			default :
			printf("invalid choice\n");
		}
	}
}
 
