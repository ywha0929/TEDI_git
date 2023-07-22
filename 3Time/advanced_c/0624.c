#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
}data;

typedef struct node{
    data Data;
    struct node* next;
}node;

node* initList()
{
    node* head = (node*) malloc(sizeof(node));
    memset(head,0,sizeof(node));
    head->next = head;
    return head;
}

node* createNode(char* name, int age)
{
    node* newNode = (node*) malloc(sizeof(node));
    memset(newNode,0,sizeof(node));
    newNode->Data.name = (char*) malloc(sizeof(char) * (strlen(name)+1));
    strcpy(newNode->Data.name,name);
    newNode->Data.age = age;
    newNode->next = newNode;
    return newNode;
}

void insertNode(node* head, int index, node* newNode)
{
    node* cur = head;
    for(int i =0; i< index; i++)
    {
        cur = cur->next;
    }
    node* next = cur->next;
    cur->next = newNode;
    newNode->next = next;
}

void deleteNode(node* head, int index)
{
    node* cur = head;
    for(int i = 0; i< index; i++)
        cur = cur->next;
    node* next = cur->next;
    cur->next = cur->next->next;
    free(next);
}

node* getNode(node* head, int index)
{
    node* cur = head;
    for(int i = 0; i< index+1; i++)
        cur = cur->next;
    return cur;
}

int isEmpty(node* head)
{
    if(head->next == head)
        return 1;
    else
        return 0;
}

int size(node* head)
{
    int num = 0;
    //fill in here
    return num;
}

int main(void)
{
    node* list = initList();
    node* node1 = createNode("YeongWooHa",24);
    node* node2 = createNode("DoYeonHeo",13);
    node* node3 = createNode("ywha",30);
    insertNode(list,0,node1);
    insertNode(list,1,node2);
    insertNode(list,1,node3);
    node* cur = getNode(list,1);
    printf("name : %s\tage : %d\n",cur->Data.name,cur->Data.age);
    deleteNode(list,1);
    cur = getNode(list,1);
    printf("name : %s\tage : %d\n",cur->Data.name,cur->Data.age);
    deleteNode(list,0);
    deleteNode(list,0);
    printf("isEmpty? : %d\n",isEmpty(list));
}