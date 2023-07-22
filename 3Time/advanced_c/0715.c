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
    struct node* prev;
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
    next->prev = newNode;
    newNode->prev = cur;
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
    node* cur = head;
    int count = 0;
    while(cur->next != head)
    {
        count++;
        cur = cur->next;
    }
    return count;
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
    cur->next->prev = cur;
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
    head->prev = head;
}

node* initStack()
{
    return initList();
}

void pushStack(node* head,node* newNode)
{
    insertNode(head,0,newNode);
}

node* pullStack(node* head)
{
    node* back = getNode(head,0);

    node* cur = back->prev;
    node* next = back->next;
    cur->next = next;
    next->prev = cur;

    back->next = back;
    back->prev = back;
    return back;
}

int main(void)
{
    char line[100] = {0,};
    node* stack = initStack();
    int count = 0;
    FILE* file = fopen("result.txt","r+");
    FILE* file2 = fopen("src.txt","w+");

    while(fscanf(file,"%s",line)!=EOF)
    {
        fscanf(file,"%s",line);
        fscanf(file,"%s",line);
        fscanf(file,"%s",line);
        // fscanf(file,"%s",line);
        if(strcmp(line,"exit") == 0)
            break;
        pushStack(stack,createNode(line,count));
        count++;
    }
    printf("\n");
    while(isEmpty(stack) == 0)
    {
        node* cur = pullStack(stack);
        fprintf(file2,"%dth member : %s\n",cur->data.age,cur->data.name);
    }
}