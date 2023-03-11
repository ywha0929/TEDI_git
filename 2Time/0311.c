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
void initQueue(node *Head)
{
}
int isEmpty(node *Head)
{
    if(Head->Next == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
node* deQueue(node *Head)
{
    if(isEmpty(Head) == 1)
    {
        printf("this Queue is Empty\n");
        return NULL;
    }
    node * Node = Head->Next;
    Node->Prev->Next = Node->Next;
    if(Node->Next != NULL)
        Node->Next->Prev = Head;
    return Node;
}
void enQueue(node *Head, node* newNode)
{
    node* cur;
    for(cur = Head ; isTail(cur)!=1; cur = cur->Next)
    {

    }
    linkNode(cur,newNode);
}
int main(void)
{
    node* head = createNode(0,"Head",5);
    initQueue(head);
    char mode = ' ';
    int number = 0;
    char input[100];
    node* cur;
    for(;1;)
    {
        scanf("%c",&mode);
        // fgetc(stdin);
        switch (mode)
        {
        case 'e':
            scanf("%d %s",&number,input);
            // while(fgetc(stdin)!='\n')
            fgetc(stdin);
            // fgetc(stdin);
            enQueue(head, createNode(number,input,strlen(input)+1));
            break;
        case 'd':
            cur = deQueue(head);
            if(cur != NULL)
                printf("%d : %s\n",cur->Data.number, cur->Data.name);
            break;
        case 'q':
            return 0;
        default:
            break;
        }
    }
}