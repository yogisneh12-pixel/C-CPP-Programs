
#include <stdio.h>
#define size 5

int top = -1;
int stack[size];

void push(int x)
{
    if(top == size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("Element inserted in stack\n");
    }
}

int pop()
{
    int x;

    if(top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        x = stack[top];
        top--;
        printf("Element deleted from stack\n");
        return x;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Elements of stack:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
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

    return 0;
}
