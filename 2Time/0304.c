#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int number;
    char* name;
} data;

typedef struct node{
    data Data;
    struct node* Next;
}node;

node* createNode(int num,char name[], int numSize)
{
    node* Node;
    Node = (node*) malloc(sizeof(node));
    Node->Next = NULL;
    (Node->Data).name = (char*) malloc(sizeof(char)*numSize);
    strcpy((Node->Data).name,name);
    (Node->Data).number = num;
    return Node;
}
void linkNode(node* prev, node* next)
{
    prev->Next = next;
}

int main(void)
{
    node* head = createNode(0,"Jack",5);
    node* tail1 = createNode(1,"Hi",3);
    node* tail2 = createNode(2,"Yop",4);
    node* end = createNode(0,"",1);
    linkNode(head,tail1);
    linkNode(tail1,tail2);
    linkNode(tail2,end);
    // (head->Data).number = 1;
    // (tail1->Data).number = 2;
    // (tail2->Data).number = 3;
    for(node* cur = head ; cur->Next!=NULL ; cur = cur->Next)
    {
        printf("%s : %d\n",(cur->Data).name,(cur->Data).number);
    }
    return 0;
}