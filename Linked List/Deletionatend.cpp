/* STEP1: Check if there are noded present or not
STEP2: If list empty,we cant perform deletion
STEP3: If list not empty then next steps
STEP4: Change the node which is presently pointing to the null of linked list
STEP5: Delete the last node from system memory
STEP6: Print new list */

/*ALGO:
IF HEAD=NULL
EXIT
SET PTR=HEAD
REPEAT NEXT TWO STEPS WHILE PTR->NEXT!=NULL
SET PREPTR=PTR
SET PTR=PTR->NEXT
NOW SET PREPTR->NEXT=NULL
FREE PTR */

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node 
{
    int num;                
    node *nextptr;             
}*stnode; //node constructed

void createList(int n);                 
void lastDelete();	            
void display();                          
 
int main()
{
    int n,num,pos;
		
    cout<<"Enter the number of nodes: ";
    cin>>n;
    createList(n);
    cout<<"\nLinked list data: \n";		
    display();
    
    lastDelete();
    cout<<"\nLinked list after deletion: \n";		
    display();

    return 0;
}
void createList(int n) //function to create linked list
{
    struct node *frntNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)        
    {
        cout<<" Memory can not be allocated";
    }
    else
    {
                                  
        cout<<"Enter the data for node 1: ";
        cin>>num;
        stnode-> num = num;      
        stnode-> nextptr = NULL; //Links the address field to NULL
        tmp = stnode;
 
        for(i=2; i<=n; i++)
        {
            frntNode = (struct node *)malloc(sizeof(struct node)); 
 

            if(frntNode == NULL) //If frntnode is null no memory cannot be allotted
            {
                cout<<"Memory can not be allocated";
                break;
            }
            else
            {
                cout<<"Enter the data for node "<<i<<": "; // Entering data in nodes.
                cin>>num;
                frntNode->num = num;         
                frntNode->nextptr = NULL;    
                tmp->nextptr = frntNode;     
                tmp = tmp->nextptr;
            }
        }
    }
} 

void lastDelete()//function to delete last node
{
    struct node *delLast, *preNode;
    if(stnode == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        delLast = stnode;
        preNode = stnode;
        
        while(toDelLast->nextptr != NULL)//Traversing till the last.
        {
            preNode = delLast;
            delLast = delLast->nextptr;
        }
        if(delLast == stnode)
        {
            stnode = NULL;
        }
        else
        {
            preNode->nextptr = NULL;
        }
 
        free(delLast);//Deleting last node
    }
}
void display() //function to print linked list
{
    struct node *tmp;
    if(stnode == NULL)
    {
        cout<<" No data found in the list";
    }
    else
    {
        tmp = stnode;
        cout<<"Linked List: ";
        while(tmp != NULL)
        {
            cout<<"\t"<<tmp->num;         
            tmp = tmp->nextptr;         
        }
    }
}