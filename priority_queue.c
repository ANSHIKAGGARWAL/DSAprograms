#include<stdio.h>
#include<stdlib.h>

int size = 5 , front = -1 , rear = -1 , DeQue[5] , i;
void InsertDeQue();

void DeleteDeQue();

void priorityData(int);

void printDeQue();

int main()
{
     int num , ch ;
    while( 1) 
    {    
        printf("ENTER THE CHOICE \n PRESS 1 FOR INSERTING ELEMENT \n PRESS 2 FOR REMOVING ELEMENT \n PRESS 3 FOR PRINTING PROIORITY QUEUE \n  PRESS 4 FOR EXIT \n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                InsertDeQue();
                break;
            case 2:
                DeleteDeQue();
                break;
            case 3:
                printDeQue();
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

void InsertDeQue()
{
    int data;

    if( rear == (size-1) )
        printf("\n DeQue is overflowed \n");

    else if( front == -1 && rear == -1){
        front = 0 , rear = 0;
        printf("Enter 1st element\n");
        scanf("%d",&DeQue[rear]);
       // printf("%d \t %d", front , rear);
    }
    else
    {
        //rear ++;
        //printf("%d \t %d", front , rear);
        printf("Enter element\n");
        scanf("%d",&data);

        priorityData(data); 
        //DeQue[rear] = data; 
        //rear++; 
    }
}

void priorityData( int data)
{
    int i , j, flag = 0;
    if( DeQue[rear] < data)
    {
            rear++;
            DeQue[rear] = data;
    }
    
    else{
    
        for( i= front; i <= rear; i++)
        {
        //printf("I is %d \t DeQue[i] is %d \t data is %d \t", i , DeQue[i], data );
        if( DeQue[i] >= data )
        {
            //printf(" DeQue[i] >= data ");
            for( j = rear+1 ; j >= i ; j--)
            {
                DeQue[ j ] = DeQue[ j - 1];
            }
            flag = 1;
            DeQue[i] = data;
            rear++;
        }
    if(flag == 1)
        break;
    }
    }
}

void DeleteDeQue()
{
    if( front == -1)
    {
        printf("\n\tDeque is underflow\n");
    }
    else if( front == rear)
    {
        printf("Deleted element is %d",DeQue[front]);
        printf("DeQue is Empty now\n");
        front = rear = -1;
    }
    else
    {
        printf("Deleted element is %d\t ",DeQue[front]);
        front ++;
    }
}

void printDeQue()
{
    int i;

    if( front == -1)
        printf("DeQue is Empty\n");
    else
    {
        printf(" PRINTED DEQUEUE IS..........\n");
        for( i = front ; i <= rear ; i++)
            printf("\t %d \n", DeQue[i]);
    }

}
