#include <stdio.h>
#include <stdlib.h>
#define N 10
int stack[N];

int top = -1;

void push()
{

    int x;

    printf("Enter the Data: \n");

    scanf("%d", &x);

    if (top == N - 1)

    {

        printf("Stack Overflow\n");
    }

    else

    {

        top++;

        stack[top] = x;
    }
}

void pop()
{

    int item;

    if (top == -1)

    {

        printf("Stack Underflow\n");
    }

    else

    {

        item = stack[top];

        top--;

        printf("The popped element is %d: \n", item);
    }
}

void display()
{

    int i;

    for (i = top; i >= 0; i++)

    {

        printf("%d \n", stack[i]);
    }
}

void peek()
{

    if (top == -1)

    {

        printf("Stack is Empty\n");
    }

    else

    {

        printf("The top element is: %d\n", stack[top]);
    }
}

void main()
{

    int choice;

    printf("Enter your Choice: \n0:Exit\n1:Push\n2:Pop\n3:Peek\n4:Display\n");

    do

    {

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

        {

            push();

            break;
        }

        case 2:

        {

            pop();

            break;
        }

        case 3:

        {

            peek();

            break;
        }

        case 4:

        {

            display();

            break;
        }

        default:

        {

            printf("Invalid Choice\n");

            break;
        }
        }

    } while (choice != 0);
}
