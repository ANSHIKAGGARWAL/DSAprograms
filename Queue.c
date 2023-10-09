#include<stdio.h>
#include<stdlib.h>
int size = 3 , front = -1 , rear = -1 , queue[3] , i;
void InsertQueue();

void DeleteQueue();

void printQueue();

int main()
{
    int num , ch ;
    while( 1) 
    {    
        printf("ENTER THE CHOICE \n PRESS 1 FOR INSERTING ELEMENT \n PRESS 2 FOR REMOVING ELEMENT \n PRESS 3 FOR PRINTING QUEUE \n  PRESS 4 FOR EXIT \n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                InsertQueue();
                break;
            case 2:
                DeleteQueue();
                break;
            case 3:
                printQueue();
                break;
            case 4:
                exit(0);
        }
        printf("DO YOU WANT TO CONTINUE PRESS 1'\\'0 \n");
        scanf("%d",&ch);
        if(ch == 0)
        exit(0);
    }
}

void InsertQueue()
{
    if( rear == size-1)
        printf("\n Queue is overflowed \n");

    else if( front == -1 && rear == -1){
        front == 0 , rear == 0;
        printf("Enter 1st element\n");
        scanf("%d",&queue[rear]);
    }
    else
    {
        front == 0 , rear == 0;
        rear++;
        printf("Enter element\n");
        scanf("%d",&queue[rear]);
    }
}

void DeleteQueue()
{
    if( front == -1 && rear == -1)
        printf("\n Queue is underflown \n");
        
    else if( front == rear){
        printf("Enter element\n");
        scanf("%d",&queue[rear]);
        front == rear == -1;
    }
    else
    {
        front--;
        printf("Deleted element is %d",queue[front]);
    }
}

void printQueue()
{
    if( front == -1)
        printf("\n Queue is EMPTY\n");
    else
    {
        printf("QUEUE IS..........\n");
        for( i = front ; i <= rear ; i++)
            printf("%d\t",queue[i]);

    }
}

