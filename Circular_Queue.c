#include<iostream>
using namespace std;
int size = 5 , front = -1 , rear = -1 , queue[5] , i;
void InsertQueue();

void DeleteQueue();

void printQueue();

int main()
{
    int num , ch ;
    while( 1) 
    {    
        std::cout<<"ENTER THE CHOICE \n PRESS 1 FOR INSERTING ELEMENT \n PRESS 2 FOR REMOVING ELEMENT \n PRESS 3 FOR PRINTING QUEUE \n  PRESS 4 FOR EXIT \n";
        std::cin>>num;
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
            default:
                std::cout<<"WRONG CHOICE PRESS AGAIN\n";
        }
        std::cout<<" \t \n DO YOU WANT TO CONTINUE PRESS 1 \\ 0"<<endl;
        std::cin>>ch;
        if(ch == 0)
        exit(0);
    }
}

void InsertQueue()
{
    if( ((rear == (size -1)) && (front == 0)) || ( rear == front -1))
    std::cout<<"QUEUE IS OVERFLOW"<<endl;
    
    else if( (front == -1) && ( rear == -1 ) )
    {
        front = rear = 0;
        std::cout<<"Enter the elements\n";
        std::cin>>queue[rear];
    }

    else if( (rear == (size -1) && (front >0)))
    {
        rear = 0;
        std::cout<<"Enter the elements\n";
        std::cin>>queue[rear];
    }

    else
    {
        rear++;
        std::cout<<"Enter the element\n";
        std::cin>>queue[rear];
    }
}

void DeleteQueue()
{
    if( front == -1 && rear == -1)
        std::cout<<"\n Queue is underflown \n";
        
    else if( front == rear)
    {
        std::cout<<"Deleted element is"<<queue[front];
        front = rear = -1;
    }
    else if( front == (size -1))
    {
        std::cout<<"DELETED ELEMENT IS \t  "<<queue[front];
        front = 0;
    }
    else
    {
        std::cout<<"Deleted element is \t "<<queue[front];
        front++;
    }
}

void printQueue()
{
    //std::cout << front <<'\t'<< rear;
    if( (front == -1) && (rear == -1))
        std::cout<<"\n Queue is EMPTY\n";

    else if( ( front <= rear ) )
    {
        std::cout<<"QUEUE IS..........\n";
        
        for( i = front ; i <= rear ; i++)
            std::cout<<queue[i]<<"\t";
    }

    else
    {
        std::cout<<"QUEUE IS..........\n";
        for( i = front ; i <= (size - 1) ; i++)
            std::cout<<queue[i]<<"\t";

        for( i = 0 ; i <= rear ; i++)
            std::cout<<queue[i]<<"\t";    
    }
}

