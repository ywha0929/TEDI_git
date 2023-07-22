#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    char tier;
}person;

typedef struct node{
    person data;
    struct node* next;
    struct node* prev;
}node;

node* createNode(char* name, char tier)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data.name = (char*) malloc(sizeof(char) * (strlen(name)+1));
    strcpy(newNode->data.name,name);
    newNode->data.tier = tier;
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

node* initQueue()
{
    return initList();
}

void enqueue(node* head, node* newNode)
{
    insertNode(head,size(head),newNode);
}

node* dequeue(node* head) 
{
    node* front = getNode(head,0);

    node* cur = head;
    node* next = cur->next;
    cur->next = cur->next->next;
    cur->next->prev = cur;

    front->next = front;
    front->prev = front;
    return front;
}

int duplicate(node* head, char* name)
{
    
    for(int i = 0; i< size(head); i++)
    {
        node* cur = getNode(head,i);
        if(strcmp(cur->data.name,name) == 0)
            return 1;
    }
    return 0;
}


int main(void)
{
    node* BQ = initQueue();
    node* SQ = initQueue();
    while(1)
    {
        char ID[10];
        char tier =0;
        scanf("%c",&tier);
        getchar();
        scanf("%s",ID);
        getchar();

        if( duplicate(BQ,ID)==1 || duplicate(SQ,ID)==1 )
        {
            printf("duplicate ID\n");
            continue;
        }
        // while(!(getchar() == '\n' || !getchar() == ' '));
        if(tier == 'B')
            enqueue(BQ,createNode(ID,tier));
        else
            enqueue(SQ,createNode(ID,tier));
        
        node* Blue;
        node* Red;
        if(size(BQ) == 2)
        {
            Blue = dequeue(BQ);
            Red = dequeue(BQ);
            // printf("Bronze Match : %s vs %s\n",Blue->data.name,Red->data.name);
            printf("\033[48;5;130mBronze Match\033[0m : \033[0;34m%s\033[0m vs \033[0;31m%s\033[0m\n",Blue->data.name,Red->data.name);
        }
        if(size(SQ) == 2)
        {
            Blue = dequeue(SQ);
            Red = dequeue(SQ);
            // printf("Silver Match : %s vs %s\n",Blue->data.name,Red->data.name);
            printf("\033[48;5;248mSilver Match\033[0m : \033[0;34m%s\033[0m vs \033[0;31m%s\033[0m\n",Blue->data.name,Red->data.name);
        }
    }
}