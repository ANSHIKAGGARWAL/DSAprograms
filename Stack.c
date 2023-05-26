#include<stdio.h>
#include<stdlib.h>
int size = 3 , top = -1 , i;
void push( int []);

void pop( int []);

void print( int []);

int main()
{
    int num , stack[3] ,ch ;
    while( 1) 
    {    printf("ENTER THE CHOICE \t PRESS 1 FOR PUSH \n PRESS 2 FOR POP \n PRESS 3 FOR PRINT\n  PRESS 4 FOR EXIT \n");
         scanf("%d",&num);
         switch(num)
        {
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                print(stack);
                break;
            case 4:
                exit(1);
        }
        printf("DO YOU WANT TO CONTINUE PRESS 1'\'0 \n");
        scanf("%d",&ch);
        if(ch == 0)
        exit(1);
    }
}

void push( int stack[])
{
    if( top == size-1)
        printf("\n Stack is overflowed \n");
    else
    {
        top++;
        printf("Enter element\n");
        scanf("%d",&stack[top]);
    }
}

void pop( int stack[])
{
    if( top == -1)
        printf("\n Stack is underflown \n");
    else
    {
        printf("Deleted element is %d",stack[top]);
        top--;
    }
}

void print( int stack [])
{
    if( top == -1)
        printf("\n Stack is EMPTY\n");
    else
    {
        printf("STACK IS..........\n");
        for( i = 0 ; i <= top ; i++)
            printf("%d\t",stack[i]);
    }
}
