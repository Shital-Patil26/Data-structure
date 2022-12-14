#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;           //4
    struct node *next;      //8
    struct node *prev;      //X      8 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; 
        *First = newn;
    }
    
}
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
       while(temp->next != NULL)
       {
            temp = temp->next;
       }
        temp->next = newn;
        newn->prev = temp;
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List are \n");
     printf("NULL<=>");
    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int Count(PNODE First)
{
   int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,51);
     Display(Head);
    InsertFirst(&Head,21);
     Display(Head);
    InsertFirst(&Head,11);
    
     Display(Head);
     
    InsertLast(&Head,101);
     Display(Head);#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;           //4
    struct node *next;      //8
    struct node *prev;      //X      8 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; 
        *First = newn;
    }
    
}
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
       while(temp->next != NULL)
       {
            temp = temp->next;
       }
        temp->next = newn;
        newn->prev = temp;
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List are \n");
     printf("NULL<=>");
    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int Count(PNODE First)
{
   int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,51);
     Display(Head);
    InsertFirst(&Head,21);
     Display(Head);
    InsertFirst(&Head,11);
    
     Display(Head);
     
    InsertLast(&Head,101);
     Display(Head);
    InsertLast(&Head,111);
     Display(Head);
     InsertLast(&Head,121);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are :%d \n ",iRet);

    return 0;
}#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;           //4
    struct node *next;      //8
    struct node *prev;      //X      8 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; 
        *First = newn;
    }
    
}
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
       while(temp->next != NULL)
       {
            temp = temp->next;
       }
        temp->next = newn;
        newn->prev = temp;
    }
}
void Display(PNODE First)
{
    printf("Elements of Linked List are \n");
     printf("NULL<=>");
    while(First != NULL)
    {
        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int Count(PNODE First)
{
   int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,51);
     Display(Head);
    InsertFirst(&Head,21);
     Display(Head);
    InsertFirst(&Head,11);
    
     Display(Head);
     
    InsertLast(&Head,101);
     Display(Head);
    InsertLast(&Head,111);
     Display(Head);
     InsertLast(&Head,121);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are :%d \n ",iRet);

    return 0;
}
    InsertLast(&Head,111);
     Display(Head);
     InsertLast(&Head,121);

    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements are :%d \n ",iRet);

    return 0;
}