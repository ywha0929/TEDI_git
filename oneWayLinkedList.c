#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
}person;

typedef struct node{
    person data;
    struct node* next;
}node;

node* createNode(char* name, int age)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data.name = (char*) malloc(sizeof(char) * (strlen(name)+1));
    strcpy(newNode->data.name,name);
    newNode->data.age = age;
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

int isEmpty(node* head)
{
    if(head->next == head)
        return 1;
    else
        return 0;
}

int size(node* head)
{

}

void deleteNode(node* head, int index)
{
    node* cur = head;
    for(int i = 0; i< index; i++)
    {
        cur = cur->next;
    }
    node* next = cur->next;
    cur->next = cur->next->next;
    free(next);
}

node* getNode(node* head, int index)
{
    node* cur = head;
    for(int i = 0; i< index+1; i++)
    {
        cur = cur->next;
    }
    return cur;
}

node* initList()
{
    node* head = (node*) malloc(sizeof(node));
    memset(head,0,sizeof(node));
    head->next = head;
}

int main(void)
{
    node* head = initList();
    node* node1 = createNode("YeongWooHa",24);
    node* node2 = createNode("JaeYoolSong",13);
    insertNode(head,0,node1);
    insertNode(head,1,node2);
    deleteNode(head,0);
    node* cur = getNode(head,0);
    printf("name : %s\tage : %d\n",cur->data.name,cur->data.age);
    deleteNode(head,0);
    printf("isEmpty() : %d\n",isEmpty(head));
    printf("%d\n",size(head));
}