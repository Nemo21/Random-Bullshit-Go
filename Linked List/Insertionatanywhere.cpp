/* STEP1: If there is no head then exit
STEP2: Allocate space for new node
STEP3: In the space created for new node put data in 
STEP4: Traverse till desired position and make point the pointer of new node where previous node is pointing
STEP5: Now point the pointer of previous node to the new node. */

/*ALGO:
IF PTR=NULL
EXIT
SET NEWNODE=PTR
NEWDATA->DATA=VALUE
SET TEMP=HEAD
SET I=0
REPEAT
TEMP=TEMP->NEXT
IF TEMP=NULL
EXIT
PTR->NEXT=TEMP->NEXT
TEMP->NEXT=PTR
SET PTR=NEWNODE
EXIT     */

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node 
{
    int num;                
    node *nextptr;             
}*stnode; //node constructed

void createList(int n);                 
void insertNode(int num, int pos);	            
void display();                          
 
int main()
{
    int n,num,pos;
		
    cout<<"Enter the number of nodes: ";
    cin>>n;
    createList(n);
    cout<<"\nLinked list data: \n";		
    display();
    cout<<"\nEnter data you want to insert at the nth position: ";
    cin>>num;
    cout<<"Enter the position to insert new node : ";
    cin>>pos;
    insertNode( num, pos);
    cout<<"\nLinked list after insertion: \n";		
    display();

   return 0;
}
void createList(int n) //function to create linked list.
{
    struct node *frntNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)        
    {
        cout<<"Memory can not be allocated";
    }
    else
    {
                                  
        cout<<"Enter the data for node 1: ";
        cin>>num;
        stnode-> num = num;      
        stnode-> nextptr = NULL; //Linking the address field to NULL
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

void insertNode(int num, int pos)//fuction to add node in desired position
{
    int i;
    struct node *frntNode, *tmp;
    frntNode = (struct node*)malloc(sizeof(struct node));
    if(frntNode == NULL)
    {
       cout<<"Memory can not be allocated.";
    }
    else
    {
        frntNode->num = num; //Linking  the data 
        frntNode->nextptr = NULL;
        tmp = stnode;
        for(i=2; i<=pos-1; i++)
        {
            tmp = tmp->nextptr;
 
            if(tmp == NULL)
                break;
        }
        if(tmp != NULL)
        {
            frntNode->nextptr = tmp->nextptr;  //Linking the address part of new node
            tmp->nextptr = frntNode;   
        }
        else
        {
            cout<<"Data cannot be entered in that particular position\n";
        }
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