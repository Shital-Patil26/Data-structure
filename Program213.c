#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
     if((*First == NULL) && (*Last == NULL))   //Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; 
        *First = newn;
        (*Last)->next = *First;
     
    }   
}
 void InsertLast(PPNODE First,PPNODE Last,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((*First == NULL) && (*Last == NULL))   //Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        (*Last) -> next = newn;
        newn ->prev = *Last;
        *Last = newn;
        (*Last)->next = *First;
    }   
}
int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}
void InsertAtPosition(PPNODE First,PPNODE Last,int no,int iPos)
{
    PNODE temp = *First;
    PNODE newn = NULL;

    int iCnt = 0,iNodeCnt = 0;
    iNodeCnt = Count(*First,*Last);

    if((iPos < 1)|| (iPos > iNodeCnt+1))
    {
        printf("Invalid Position \n");
        return;
    }   
    if(iPos == 1)
    {
        InsertFirst(First,Last,no);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        for(iCnt = 1; iCnt <iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL))    //Empty LL
    {
        return;
    }
    else if(*First == *Last)  // OR *First == First  //Single LL
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    //if LL contains more than one node
    {
        (*First)->prev = *First;
        *First = (*First)->next;
        free(temp);
        (*Last)->next = *First;
    }
}
void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp = *First;
    if((*First == NULL) && (*Last == NULL))    //Empty LL
    {
        return;
    }
    else if(*First == *Last)  // OR *First == First  //Single LL
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else    //if LL contains more than one node
    {
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        free(temp->next);    // free(*Last);
        *Last = temp;
        (*Last)->next = *First;
    }
}

void Display(PNODE First,PNODE Last)
{
     printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |=> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

void DeleteAtPosition(PPNODE First,PPNODE Last,int iPos)
{
    PNODE temp1 = *First;
    PNODE temp2;
    int iCnt =0,iNodeCnt = 0;
    iNodeCnt = Count(*First,*Last);

    if((iPos < 1) || (iPos > iNodeCnt))
    {
        printf("Invalid Position \n");
        return;
    }   
    if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    { 
        for(iCnt = 1; iCnt <iPos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp2->next->prev = temp1;
        temp1->next = temp2->next;
        free(temp2);       
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    
    
    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    InsertFirst(&Head, &Tail, 5);
    Display(Head,Tail);

    InsertAtPosition(&Head,&Tail,105,5);
    Display(Head,Tail);
    
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);
    InsertLast(&Head, &Tail, 151);
    Display(Head,Tail);
    
    DeleteAtPosition(&Head,&Tail,5);
    Display(Head,Tail);

    DeleteFirst(&Head,&Tail);
     Display(Head,Tail);
    
    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    
    return 0;
}