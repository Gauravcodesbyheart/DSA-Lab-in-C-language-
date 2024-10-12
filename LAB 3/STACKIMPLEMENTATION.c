#include <stdio.h>
int stack[100], choice, n, top, x, i;
void Push(void);
void Pop(void );
void Display(void );
int main()
{
    top = -1;
    printf("\nEnter the size of stack[Max = 100]:\n");
    scanf("%d", &n);
    printf("Stack Operation using array:\n");
    printf("Numbers in front of the operation represent their selection");
    printf("1.Push\n2.Pop\n3.Display\nExit");
    do
    {
        printf("Enter the choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            Push();
            break;
        }
        case 2:
        {
            Pop();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
        case 4:
        {
            printf("EXIT");
            break;
        }
        default:
        {
            printf("Please Enter a valid choice 1 \ 2\ 3\ 4");
        }
        
    } 
    }
    while (choice != 4);
    return 0;
}
    void Push()
    {
        if (top >= n - 1)
        {
            printf("\nStack is overflow\n");
        }
        else
        {
            printf("Please enter a value to be pushed\n");
            scanf("%d", &x);
        }
        top++;
        stack[top] = x;
    }
    void Pop()
    {
        if (top <= -1)
        {
            printf("Stack is overflow");
        }
        else
        {
            printf("The popped element is %d", stack[top]);
            top--;
        }
    }
    void Display()
    {
        if (top >= 0)
        {
            printf("The elements in the stack\n");
            for (i = top; i >= 0; i--)
            {
                printf("%d", stack[i]);
                printf("Press next choice");
            }
        }
        else
        {
            printf("The stack is Empty");
        }
    }
