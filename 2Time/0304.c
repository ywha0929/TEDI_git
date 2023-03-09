#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int number;
    char* name;
} data;

typedef struct node{
    data Data;
    struct node* Prev; //points to Previous node
    struct node* Next;

}node;

node* createNode(int num,char name[], int numSize)
{
    node* Node;
    Node = (node*) malloc(sizeof(node));
    Node->Next = NULL;
    Node->Prev = NULL;
    (Node->Data).name = (char*) malloc(sizeof(char)*(strlen(name)+1));
    strcpy((Node->Data).name,name);
    (Node->Data).number = num;
    return Node;
}
node* deleteNode(node* Node)
{
    Node->Prev->Next = Node->Next;
    Node->Next->Prev = Node->Prev;
    free(Node);
}
void linkNode(node* first_node, node* second_node)
{
    first_node->Next = second_node;
    second_node->Prev = first_node;
}
int isHead(node* Node)
{
    if(Node->Prev ==  NULL)
        return 1;
    else
        return 0;
}
int isTail(node* Node)
{
    if(Node->Next == NULL)
        return 1;
    else 
        return 0;
}
node* getNodeByIndex(node* Head, int index)
{
    node* cur = Head;
    for(int i = 0; i<index; i++)
    {
        if(cur->Next == NULL)
        {
            printf("index out of range\n");
            return NULL;
        }
        cur = cur->Next;
        if(cur->Next == NULL)
        {
            printf("index out of range\n");
            return NULL;
        }
        
    }
    return cur;
}
void updateData(node* Node, int number, char name[])
{
    Node->Data.number = number;
    Node->Data.name = (char*) realloc(Node->Data.name,sizeof(char)*(strlen(name)+1));
    strcpy(Node->Data.name,name);
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
    updateData(tail1,tail1->Data.number,"Yeong Woo Ha");
    // deleteNode(tail1);
    // (head->Data).number = 1;
    // (tail1->Data).number = 2;
    // (tail2->Data).number = 3;
    for(node* cur = head ; isTail(cur) != 1 ; cur = cur->Next)
    {
        printf("%s : %d\n",(cur->Data).name,(cur->Data).number);
    }
    node* cur = getNodeByIndex(head,1);
    if(cur != NULL)
    {
        printf("%s : %d\n",(cur->Data).name,(cur->Data).number);
    }
    return 0;
}