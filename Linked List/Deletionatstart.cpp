/* STEP1: If list empty return deletion not possible
STEP2: If list NOT empty then next steps
STEP3: Free the pointer which was pointing to the head node of the list 
STEP4: Make second node of the list as head by pointing the head pointer to it 
STEP5: Return new list after deleting first node */

/*ALGO:
IF HEAD=NULL
EXIT
SET PTR=HEAD
SET HEAD=HEAD->NEXT
FREE PTR
EXIT */

#include &ltiostream&gt
#include <stdlib.h>
using namespace std;

struct node 
{
    int num;                
    node *nextptr;             
}*stnode; //node constructed

void createList(int n);                 
void firstDelete();	            
void display();                          
 
int main()
{
    int n,num,pos;
		
    cout<<"Enter the number of nodes: ";
    cin>>n;
    createList(n);
    cout<<"\nLinked list data: \n";		
    display();
    
    firstDelete();
    cout<<"\nLinked list after deletion: \n";		
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

void firstDelete() //function to delete first node of singly linked list
{
    struct node *delptr;
    if(stnode == NULL)
    {
        cout<<"List is empty"; } 
    else 
    { 
        delptr = stnode; 
        stnode = stnode->nextptr;
        free(delptr);  // Clears the memory occupied by first node
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
            cout<<"\t"<num;         
            tmp = tmp->nextptr;         
        }
    }
}