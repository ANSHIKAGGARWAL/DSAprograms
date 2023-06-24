#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

struct node{
    int data;
    struct node *next;
}*start = NULL , *temp , *temp1 , *NN ;

void addNode();

void printNode();

void searchNode();

void Insert_new_element();

void ADD_NODE_AT_BEG();

void ADD_NODE_BEF_Gvn();

void ADD_NODE_AF_Gvn();

void ADD_NODE_AT_END();

void del_node_from_beg();

void del_node_from_end();

int main()
{
    int num , ch ;
    while( 1)
    {
	std::cout<<"ENTER THE CHOICE \n PRESS 1 FOR ADD \n PRESS 2 FOR PRINTING \n PRESS 3 FOR SEARCHING NODE \n PRESS 4 FOR ADDING A NEW NODE IN BEGINNING \n PRESS 5 FOR ADDING A NEW NODE BEFORE GIVEN NODE \n PRESS 6 FOR ADDING A NEW NODE AFTER GIVEN NODE \n PRESS 7 FOR ADDING A NEW NODE AT THE END OF LINKED LIST \n PRESS 8 FOR DELETING NODE FROM LINKED LIST FROM BEGINNING \n PRESS 9 FOR  DELETING NODE FROM LINKED LIST FROM END \n PRESS 10 FOR EXIT \n";
	std::cin>>num;
	switch(num)
	{
	    case 1:
		        addNode();
		        break;
	    case 2:
		        printNode();
		        break;
	    case 3:
                searchNode();
                break;
        case 4:
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
        case 11:
		        exit(0);
	    default:
		        std::cout<<"INVALID CHOICE\n";
	}
	std::cout<<"\n\tDO YOU WANT TO CONTINUE PRESS 1'\\'0 \n";
	std::cin>>ch;
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
	}
	else
	{
	    temp -> next = NN;
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

// function for Adding a new node at THE BEGINNING OF LINKED LIST
void ADD_NODE_AT_BEG()
{
   NN = (struct node*)malloc(sizeof(node));
    if(NN == NULL)
    std::cout<<"Memory is not available for allocation\n";
    else
    {
        std::cout<<"\nEnter Node Data : ";
	    std::cin>>NN -> data ;
        temp = start ;
        
        if( start == NULL)
        std::cout<<"LINKED LIST IS EMPTY\n";

        else
        {
            NN -> next = start;
           start = NN;
        }
    }
}

// function to add new node before a given node.
void ADD_NODE_BEF_Gvn()
{
   NN = (struct node*)malloc(sizeof(node));

    if(NN == NULL)
    std::cout<<"Memory is not available for allocation\n";

    else
    {
        std::cout<<"\nEnter Node Data : ";
	    std::cin>>NN -> data ;

        int flag = 0 , value;
        temp = start ;
        std::cout<<"ENTER THE VALUE YOU WANT TO SEARCH :- \n";
        std::cin>>value;
    
        if( start == NULL)
        std::cout<<"LINKED LIST IS EMPTY\n";

        else
        {
            //checking for 1st node
            // Adding a new node at THE BEGINNING OF LINKED LIST
            if( temp -> data == value)
            {
               flag = 1;
               NN -> next = start;
               start = NN;
            }

            else{
                    while( temp -> next != NULL)
                    {
                        if( value == temp->data)
                        {
                            flag = 1;
                            temp1 -> next = NN;
                            NN -> next = temp;
                            break;
                        }
                        temp1 = temp;
                        temp = temp -> next;
                    }

                    if( value == temp-> data)//for last node
                    {
                        flag = 1;
                        temp1 -> next = NN;
                        NN -> next = temp;
                    }
                } // end of 3rd else
            if(flag != 1)
                std::cout<<"Data is not found \n";
        
        }//end of  2nd else 
    }//end of 1st
}

void ADD_NODE_AF_Gvn()
{
    NN = (struct node*)malloc(sizeof(node));

    if(NN == NULL)
    std::cout<<"Memory is not available for allocation\n";

    else
    {
        std::cout<<"\nEnter Node Data : ";
	    std::cin>>NN -> data ;

        int flag = 0 , value;
        temp = start;
        temp1 = temp ->next;

        std::cout<<"ENTER THE VALUE YOU WANT TO SEARCH :- \n";
        std::cin>>value;
    
        if( start == NULL)
        std::cout<<"LINKED LIST IS EMPTY\n";

        else
        {
            //checking for the last node
            // Adding a new node at THE END OF LINKED LIST
            if( temp -> data == value)
            {
               flag = 1;
               temp -> next = NN;
               //temp = temp ->next;
               NN -> next = temp1 ;

            }

            else{
                    while( temp -> next != NULL)
                    {
                        if( value == temp ->data)
                        {
                            flag = 1;
                            temp -> next = NN;
                            NN -> next = temp1;
                            break;
                        }
                        temp = temp1;
                        temp1 = temp1 -> next;
                    }
            
                    if( value == temp -> data)//for last node
                    {
                        flag = 1;
                        temp -> next = NN;
                        NN -> next = temp1;
                    }
                } // end of 3rd else
            if(flag != 1)
                std::cout<<"Data is not found \n";
        
        }//end of  2nd else 
    }//end of 1st
}

void ADD_NODE_AT_END()
{
    NN = (struct node*)malloc(sizeof(node));

    if(NN == NULL)
    std::cout<<"Memory is not available for allocation\n";

    else
    {
        std::cout<<"\nEnter Node Data that you want to link at the end of the linked list : ";
	    std::cin>>NN -> data ;

        if( start == NULL)
        std::cout<<"LINKED LIST IS EMPTY\n";

        else
        {
            temp -> next = NN;
            temp = temp ->next;
            NN -> next = NULL;
        }

    }
}

void del_node_from_beg()
{
    if( start == NULL)
        std::cout<<"LINKED LIST IS EMPTY\n";  
    else
    {
        temp = start;
        start = start -> next;
        std::cout<<"Deleted node is :-"<< temp -> data;
        free( temp );
    }
}

void del_node_from_end()
{
    if( start == NULL)
        std::cout<<"LINKED LIST IS EMPTY\n";
    else
    {
        temp = start;
        if( temp -> next == NULL)
        {
            start = NULL;
            std::cout<<"Deleted node is :-"<< temp -> data;
            free( temp );
        }
        else{
            while( temp -> next != NULL)
            {
                temp1 = temp;
                temp = temp -> next;
            }
            temp1 ->next = NULL;
            std::cout<<"Deleted node is :"<< temp -> data;
            free(temp);
        }
    }
}

void del_Gvn_node()
{
    
}
