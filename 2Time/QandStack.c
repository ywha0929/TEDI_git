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
    second_node->Next = first_node->Next;
    first_node->Next = second_node;
    if(second_node->Next !=NULL)
        second_node->Next->Prev = second_node;
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
    node* thisNode = Head->Next;
    Head->Next = thisNode->Next;
    if(thisNode->Next != NULL)
        thisNode->Next->Prev = Head;
    return thisNode;
}
void enQueue(node *Head, node* newNode)
{
    node* cur;
    for(cur = Head ; isTail(cur)!=1; cur = cur->Next)
    {

    }
    linkNode(cur,newNode);
}
void initStack(node * Head)
{

}
void pushStack(node *Head,node* newNode)
{
    // printf("done\n");
    linkNode(Head,newNode);
}
node* pullStack(node *  Head)
{
    node* thisNode = Head->Next;
    Head->Next = thisNode->Next;
    if(thisNode->Next != NULL)
        thisNode->Next->Prev = Head;
    return thisNode;
}
int main(void)
{
    node* queue = createNode(0,"Head",5);
    node* stack = createNode(0,"Head",5);
    char input = '\0';
    while(input != ' ' || input !='\n')
    {
        scanf("%c",&input);
        if(input == ' ' || input =='\n')
            break;
        node* inputNode = createNode(input-48,"number",strlen("number")+1);
        enQueue(queue,inputNode);
    }
    int num = 0;
    for(node* cur = queue; isEmpty(queue)==0;)
    {
        cur = deQueue(queue);
        num *=10;
        num += cur->Data.number;
    }
    printf("%d\n",num);
    while(num != 0)
    {
        int digit = num % 10;
        node* outputNode = createNode(digit+48,"number",strlen("number")+1);
        pushStack(stack,outputNode);
        num = num / 10;
    }
    for(;isEmpty(stack)==0;)
    {
        node* outputNode = pullStack(stack);
        printf("%c",outputNode->Data.number);
    }
    printf("\n");
}