#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

struct node{
    int data;
    struct node *next , *previous;
}*start = NULL , *temp , *temp1 , *NN , *temp2 ;

void addNode();

void printNode();

void printRevNode();

int main()
{
    int num , ch ;
    while( 1)
    {
	printf("ENTER THE CHOICE \n PRESS 1 FOR ADD \n PRESS 2 FOR PRINTING \n PRESS 3 FOR DISPLAYING DOUBLY LINKED LIST IN REVERSE OREDER \n PRESS 4 FOR SEARCHING NODE \n PRESS 4 FOR ADDING A NEW NODE IN BEGINNING \n PRESS 5 FOR ADDING A NEW NODE BEFORE GIVEN NODE \n PRESS 6 FOR ADDING A NEW NODE AFTER GIVEN NODE \n PRESS 7 FOR ADDING A NEW NODE AT THE END OF LINKED LIST \n PRESS 8 FOR DELETING NODE FROM LINKED LIST FROM BEGINNING \n PRESS 9 FOR  DELETING NODE FROM LINKED LIST FROM END \n PRESS 10 FOR DELETING GIVEN NODE FROM LINKED LIST \n PRESS 11 FOR EXIT \n");
	scanf("%d" , &num);
	switch(num)
	{
	        case 1:
		        addNode();
		        break;
	        case 2:
		        printNode();
		        break;
	        case 3:
                        printRevNode();
                        break;
                /*case 4:
                        ADD_NODE_AT_BEG();
                        break;
                case 5:
                        ADD_NODE_BEF_Gvn();
                        break;
                case 6:
                        ADD_NODE_AF_Gvn();
                        break;
                case 7:
                        ADD_NODE_AT_END();
                        break;
                case 8:
                        del_node_from_beg();
                        break;
                case 9:
                        del_node_from_end();
                        break;
                case 10:
                        del_Gvn_node();
                        break;
                */
                case 11:
		        exit(0);
	        default:
		        printf("INVALID CHOICE\n");
	}
	printf("\n\tDO YOU WANT TO CONTINUE PRESS 1'\\'0 \n");
	scanf("%d",&ch);
	
        if(ch == 0)
	        exit(0);
    }
    getch();
}

void addNode()
{
        // NN = new  struct node;
    NN = (struct node*)malloc(sizeof(node));

    //std::cout<<NN<<"\n";
    if(NN == NULL)
    std::cout<<"Memory is not available for allocation\n";
    else
    {
	std::cout<<"\nEnter Node Data : ";
	std::cin>>NN -> data;
	NN -> next = NULL;
	if(start == NULL)
	{
	    temp = start = NN;
            temp -> previous = NULL;
	}
	else
	{
	    temp -> next = NN;
            NN -> previous = temp;
	    temp = temp -> next;

	}
    }
}

void printNode()
{
    temp = start;
    if( start == NULL)
    std::cout<<"Linked list is empty";
    else
    {   
        std::cout<<"LINKED LIST IS -"<<"\n";
	    while( temp-> next != NULL)
        {
	        std::cout<< temp->data<< "->";
	        temp = temp->next;
	    }
	    std::cout<< temp -> data;
    }
}

void printRevNode()
{
    temp = NN;
    if( start == NULL)
    std::cout<<"Linked list is empty";
    else
    {   
        std::cout<<"LINKED LIST IN REVERSE ORDER IS -"<<"\n";
	while( temp-> previous != NULL)
        {
	        std::cout<< temp->data<< "->";
	        temp = temp -> previous;
	}
	    std::cout<< temp -> data;
    }
}

void searchNode()
{
    int flag = 0 , pos = 0 , value;
    temp = start ;
    std::cout<<"ENTER THE VALUE YOU WANT TO SEARCH :- \n";
    std::cin>>value;
    
    if( start == NULL)
    std::cout<<"LINKED LIST IS EMPTY\n";

    else
    {
        while( temp -> next != NULL)
        {
            pos++;
            if( value == temp->data)
            {
                std::cout<<"Data is found at NODE number :- "<<pos;
                flag = 1;
            }
            temp = temp -> next;
        }

        if( value == temp-> data)
        {
            pos++;
            std::cout<<"Data is found at NODE number :- "<<pos;
               flag = 1;
        }

        if(flag != 1)
            std::cout<<"Data is not found \n";
    }
}

void insertion_beginning()  
{   
   int item;  
   NN = (struct node *)malloc(sizeof(struct node));  
   if(NN == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Item value");  
    scanf("%d",&item);  
      
   if(start==NULL)  
   {  
       NN-> next = NULL;  
       NN-> previous = NULL;  
       NN->data = item;  
       temp = NN;  
   }  
   else   
   {  
        printf("Entered value is inserted\n");
       NN->data=item;  
       NN->previous=NULL;  
       NN->next = start;  
       start -> previous=NN;  
       start = NN;  
   }  
   printf("\nNode inserted\n");  
}  
}
