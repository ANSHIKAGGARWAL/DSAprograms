#include<iostream>
using namespace std;

int size = 5 , front = -1 , rear = -1 , DeQue[5] , i;
void InsertDeQue();

void DeleteDeQue();

void printDeQue();

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
    
    if( rear == (size-1) )
        printf("\n DeQue is overflowed \n");

    else if( front == -1 && rear == -1){
        front = 0 , rear = 0;
        std::cout<<"Enter 1st element\n";
        std::cin>>DeQue[rear];
    }
    else{
        rear++;

        std::cout<<" Enter any element: \n";
        std::cin>>DeQue[rear];
    }
}
       
void DeleteDeQue()
{
    char ch;
    std::cout<<"Enter from where you want to delete \t PRESS R FOR REAR SIDE AND F FOR FRONT SIDE \n";
    std::cin>>ch;

    if( front == -1)
    {
        std::cout<<"\n\tDeque is underflow\n";
    }
    else if( front == rear)
    {
        std::cout<<"Deleted element is"<<DeQue[front];
        std::cout<<" DeQue is Empty now\n";
        front = rear = -1;
    }

    else if( ch == 'F' || ch =='f')
    {
            std::cout<<"Deleted element is "<<DeQue[front]<<"\t";
            front++;

    }
    
    else if( ch == 'R' || ch == 'r')
    {
        std::cout<<"Deleted element is "<<DeQue[rear]<<"\t";
        rear--;

    }
}

void printDeQue()
{
    int i;
    if( front == -1)
    std::cout<<"DeQue is Empty\n";

    else
    {
        std::cout<<" PRINTED DEQUEUE IS..........\n";
        for( i = front ; i <= rear ; i++)
            std::cout<<DeQue[i]<<endl;
    }

}
