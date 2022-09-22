#include <stdio.h>
#include <stdlib.h>
#define size 10

int top = -1, stack[size];

void push()
{
    int x;

    if (top == size - 1)
    {
        printf("\nStack Overflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow!!");
    }
    else
    {
        printf("\nPopped element:  %d", stack[top]);
        top = top - 1;
    }
}

void show()
{

    if (top == -1)
    {
        printf("\nStack Underflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}
