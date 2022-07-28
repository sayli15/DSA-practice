/*
<<<<<<<<<<Singly Linked List>>>>>>>>>>>>

1. Insert First
2. Insert Last
3. Delete First
4. Delete Last
5. Count
6. Insert at any position
7. Delete from any position
8. Display 
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL){
        *Head = newn;
    } else{
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no){
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL){
        *Head = newn;
    } else{
        while(temp->next != NULL){
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head){
    PNODE temp = *Head;

    if(*Head != NULL){
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head){
    PNODE temp = *Head;
    
    if(*Head == NULL){
        return;
    } else if((*Head)->next == NULL){
        free(*Head);
        *Head = NULL;
    } else{
        while(temp->next->next != NULL){
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

int Count(PNODE Head){
    int iCount = 0;

    while(Head != NULL){
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

void InsertAtPos(PPNODE Head, int no, int pos){
    PNODE newn = NULL;
    PNODE temp = *Head;
    int iSize = 0;

    iSize = Count(*Head);

    if((pos<1) || (pos>iSize+1)){
        return;
        printf("Invalid Position");
    }
    if(pos==1){
        InsertFirst(Head, no);
    } else if(pos == iSize+1){
        InsertLast(Head, no);
    } else{
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> next = NULL;

        for(int i=0;i<pos-1;i++){
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next=newn;
    }
}

void DeleteAtPos(PPNODE Head, int pos){
    PNODE temp = *Head;
    PNODE targeted = NULL;
    int iSize = 0;

    iSize = Count(*Head);

    if((pos<1) || (pos>iSize)){
        return;
        printf("Invalid Position");
    }


    if(pos==1){
        DeleteFirst(Head);
    } else if(pos == iSize+1){
        DeleteLast(Head);
    } else{
        for(int i=0;i<pos-1;i++){
            temp = temp -> next;
        }
        targeted = temp -> next;
        temp -> next = targeted -> next;
        free(targeted);
    }
}

void Display(PNODE Head){
    while(Head != NULL){
        printf("|%d| -> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}


int main(){
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);

    InsertAtPos(&first,25,2);

    Display(first);

    iRet=Count(first);
    printf("Size is : %d\n\n",iRet);

    DeleteFirst(&first);
    DeleteLast(&first);

    DeleteAtPos(&first,2);

    Display(first);
    
    iRet=Count(first);
    printf("Size is : %d\n",iRet);

    return 0;
}

