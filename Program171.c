#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node //sizeof(node) = 12
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct  node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
    
    if(*First == NULL)  //If Linked list is empty
    {
        *First = newn;
    }
    else            //It Linked list contains atleast on node
    {
       newn->next = *First;
       *First = newn; 
    }

}

void InsertLast(PPNODE First ,int no)
{
    
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
        
    if(*First == NULL)  //If Linked list is empty
    {
        *First = newn;
    }
    else            //It Linked list contains atleast on node
    {
        

    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");
    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First->next;
    }
    printf("NULL \n");
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    
    return 0;
}