#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include <pthread.h>

#define Size 20

typedef struct {
    char* name;
    int socket;
}person;

typedef struct {
    person blue;
    person red;
}match;

typedef struct node{
    person data;
    struct node* next;
    struct node* prev;
}node;

node* createNode(char* name, int socket)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data.name = (char*) malloc(sizeof(char) * (strlen(name)+1));
    strcpy(newNode->data.name,name);
    newNode->data.socket = socket;
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
int CheckWinner(char board[][Size], int y, int x)
{
    char target = board[y][x];
    int winner = 0;
    int flag = 0;
    //E
    while(x > 0 && board[y][x-1] == target)
        x = x - 1;
    if(x > Size - 5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y][x+i] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    //SE
    while(y > 0 && x > 0 && board[y-1][x-1] == target)
    {
        x = x - 1;
        y = y - 1;
    }
    if(x > Size - 5 || y> Size - 5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y+i][x+i] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    //S
    while( y > 0 && board[y-1][x] == target)
        y = y - 1;
    if(y > Size - 5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y+i][x] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    //SW
    while(y > 0 && x < Size-1 && board[y-1][x+1] == target)
    {
        y = y - 1;
        x = x + 1;
    }
        
    if(x <4 || y > Size -5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y+i][x-i] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    return winner;
}

void printBoard(char board[][Size])
{
    for(int i = 0; i< Size+1; i++)
    {
        for(int j = 0; j< Size+1; j++)
        {
            if(i == 0 && j == 0)
            {
                printf("  ");
            }
            else if(i ==0 && j != 0)
            {
                printf("%2d",j-1);
            }
            else if(i != 0 && j==0)
            {
                printf("%2d",i-1);
            }
            else
            {
                if(board[i-1][j-1] == 'X')
                    printf("\033[0;31m");
                else if (board[i-1][j-1] == 'O')
                    printf("\033[0;34m");
                printf("%2c",board[i-1][j-1]);
                printf("\033[0m");
            }

            printf(" ");
        }
        printf("\n");
    }
}


// void* write_thd(void* socket);
// void* read_thd(void* socket);
void* game_thd(void* Match);
void error_handling(char* msg)
{
	fprintf(stderr,"%s\n",msg);
	return;
}



int main(void)
{
    node* Queue;
    Queue= initQueue();
	char port[]="21234";
	char msg[500];
    int ports = 21235;
    pthread_t p_thread[200];
    int thread_index = 0;
	// int status;
    int serv_sock, clnt_sock = -1;
    struct sockaddr_in serv_addr,clnt_addr;
    socklen_t clnt_addr_size;
    serv_sock = socket(PF_INET, SOCK_STREAM,0);
    if(serv_sock == -1)
            error_handling("socket() error");
    memset(&serv_addr,0,sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(atoi(port));
    if(bind(serv_sock,(struct sockaddr*) &serv_addr,sizeof(serv_addr))== -1)
        error_handling("bind() error");
	
    while(1)
    {
        // printf("tryng to listen");
        if(listen(serv_sock,5) == -1)
                error_handling("listen() error");
        if(clnt_sock<0)
        {
            clnt_addr_size = sizeof(clnt_addr);
            clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr,&clnt_addr_size);
            if(clnt_sock == -1)
                    error_handling("accept() error");
        }
        int sock = clnt_sock;
        char msg[500];
        sprintf(msg,"%d",ports);
        int portNum = ports;
        ports++;
        // pthread_create(&p_thread[0],NULL,network_thd,(void*)&portNum);
        send(sock,msg,sizeof(msg),MSG_NOSIGNAL);
        clnt_sock = -1;
        close(sock);

        int serv_sock2, clnt_sock2 = -1;
        struct sockaddr_in serv_addr2,clnt_addr2;
        socklen_t clnt_addr_size2;
        serv_sock2 = socket(PF_INET, SOCK_STREAM,0);
        if(serv_sock2 == -1)
                error_handling("socket() error");
        memset(&serv_addr2,0,sizeof(serv_addr2));
        serv_addr2.sin_family = AF_INET;
        serv_addr2.sin_addr.s_addr = htonl(INADDR_ANY);
        serv_addr2.sin_port = htons(portNum);
        if(bind(serv_sock2,(struct sockaddr*) &serv_addr2,sizeof(serv_addr2))== -1)
        {
            error_handling("bind() error");
            continue;
        }

        printf("created %d port socket\n",portNum);


        if(listen(serv_sock2,5) == -1)
            error_handling("listen() error");
        if(clnt_sock2<0)
        {
            clnt_addr_size2 = sizeof(clnt_addr2);
            clnt_sock2 = accept(serv_sock2, (struct sockaddr*)&clnt_addr2,&clnt_addr_size2);
            if(clnt_sock2 == -1)
                    error_handling("accept() error");
        }
        int sock2 = clnt_sock2;

        int len = read(sock2,msg,sizeof(msg));
        printf("msg from %d : %s\n",portNum,msg);

        enqueue(Queue,createNode(msg,sock2));


        if(size(Queue) >= 2)
        {
            match newMatch;
            newMatch.blue = dequeue(Queue)->data;
            newMatch.red = dequeue(Queue)->data;
            
            // printf("new Match %s vs %s\n",newMatch.blue.name,newMatch.red.name);
            pthread_create(&p_thread[thread_index],NULL,game_thd,(void*)&newMatch);
            thread_index++;
        }

        // close(serv_sock);
        // close(sock);
    }
    // if(bind(serv_sock,(struct sockaddr*) &serv_addr,sizeof(serv_addr))== -1)
    //         error_handling("bind() error");
    // if(listen(serv_sock,5) == -1)
    //         error_handling("listen() error");
    // if(clnt_sock<0)
    // {
    //     clnt_addr_size = sizeof(clnt_addr);
    //     clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr,&clnt_addr_size);
    //     if(clnt_sock == -1)
    //             error_handling("accept() error");
    // }
	// int sock = clnt_sock;
    
	/*
	char port[6]="5672";
	char msg[100];
	char ip[16]="192.168.0.28";
	printf("Insert ip addr : ");
	printf("192.168.0.22\n");
	//scanf("%s",ip);
	printf("Insert port num : %s\n",port);
	//scanf("%s",port);
	struct sockaddr_in serv_addr;
	int sock = socket(PF_INET,SOCK_STREAM,0);
	if(sock == -1)
	{
		printf("socket error\n");
	}
	memset(&serv_addr,0,sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(ip);
	serv_addr.sin_port = htons(atoi(port));
	if(connect(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr)) == -1)
	{
		printf("connect() error\n");
		return 0;
	}
			//printf("connect() error\n");
	else
	{
		printf("Connection with %s:%s successfully done!\n",ip,port);
	}
	
	while(1)
	{
		printf("type in message (maxlen = 100) (EnD to end)\n");
		scanf("%s",msg);
		if(strcmp("EnD",msg)==0)
		{
			write(sock,msg,sizeof(msg));

			break;
		
		}
		write(sock,msg,sizeof(msg));
	}
	*/
	// pthread_t p_thread[2];
	// int status;
	// pthread_create(&p_thread[0],NULL,write_thd,(void*)&sock);
	// pthread_create(&p_thread[1],NULL,read_thd,(void*)&sock);

	// pthread_join(p_thread[0],(void**)&status);
	// pthread_join(p_thread[1],(void**)&status);

	//printf("closing socket\n");
	//close(sock);
	return 0;
}


void* game_thd(void* Match)
{
    match newMatch = *((match*) Match);
    char msg[500] = {0,};
    char msg_r[500] = {0,};
    printf("new Match %s vs %s\n",newMatch.blue.name,newMatch.red.name);
    sprintf(msg,"new Match %s vs %s\n",newMatch.blue.name,newMatch.red.name);
    write(newMatch.blue.socket,msg,sizeof(msg));
    write(newMatch.red.socket,msg,sizeof(msg));


    for(int i = 0; i< 500; i++)
        msg[i] = 0;
    sprintf(msg,"0\n");
    write(newMatch.blue.socket,msg,sizeof(msg));
    for(int i = 0; i< 500; i++)
        msg[i] = 0;
    sprintf(msg,"1\n");
    write(newMatch.red.socket,msg,sizeof(msg));


    char board[Size][Size];
    for(int i = 0; i< Size; i++)
        for(int j = 0; j<Size; j++)
            board[i][j] = '*';
    printBoard(board);
    for(int i = 0; i< 500; i++)
        msg[i] = 0;
    sprintf(msg,"%s",board);
    write(newMatch.blue.socket,msg,sizeof(msg));
    write(newMatch.red.socket,msg,sizeof(msg));
    int mode = 0;
    while(1)
    {
        int x = 0, y = 0;
        for(int i = 0; i< 500; i++)
            msg[i] = 0;
        if(mode%2 == 0)
        {
            printf("blue's turn\n");
            sprintf(msg,"your turn!\n");
            write(newMatch.blue.socket,msg,sizeof(msg));

            read(newMatch.blue.socket,msg_r,sizeof(msg_r));
            // printf("msg from blue %s\n",msg_r);
            char* tok = strtok(msg_r,", ");
            // int x = 0, y = 0;
            x = atoi(tok);
            tok = strtok(NULL,", ");
            y = atoi(tok);
            printf("msg from blue %d, %d\n",x,y);
            // if(board[y][x] != '*')
            // {
            //     printf("That position is already taken\n");
            //     continue;
            // }
            
            board[y][x] = 'O';
        }
        else
        {
            printf("red's turn\n");
            sprintf(msg,"your turn!\n");
            write(newMatch.red.socket,msg,sizeof(msg));
            read(newMatch.red.socket,msg_r,sizeof(msg_r));
            // printf("msg from red %s\n",msg_r);
            char* tok = strtok(msg_r,", ");

            x = atoi(tok);
            tok = strtok(NULL,", ");
            y = atoi(tok);
            printf("msg from red %d, %d\n",x,y);
            // if(board[y][x] != '*')
            // {
            //     printf("That position is already taken\n");
            //     continue;
            // }
            board[y][x] = 'X';
        }
        for(int i = 0; i< 500; i++)
            msg[i] = 0;
        sprintf(msg,"%s\n",board);
        write(newMatch.blue.socket,msg,sizeof(msg));
        write(newMatch.red.socket,msg,sizeof(msg));
        printBoard(board);
        int winner = CheckWinner(board, y, x);
        if(winner != 0)
        {
            if(mode % 2 == 0) //blue win
            {
                for(int i = 0; i< 500; i++)
                    msg[i] = 0;
                sprintf(msg,"%d\n",1);
                write(newMatch.blue.socket,msg,sizeof(msg));
                for(int i = 0; i< 500; i++)
                    msg[i] = 0;
                sprintf(msg,"%d\n",-1);
                write(newMatch.red.socket,msg,sizeof(msg));
                break;
            }

            else
            {
                for(int i = 0; i< 500; i++)
                    msg[i] = 0;
                sprintf(msg,"%d\n",-1);
                write(newMatch.blue.socket,msg,sizeof(msg));
                for(int i = 0; i< 500; i++)
                    msg[i] = 0;
                sprintf(msg,"%d\n",1);
                write(newMatch.red.socket,msg,sizeof(msg));
                break;
            }
        }
        else
        {
            sprintf(msg,"%d\n",0);
            write(newMatch.blue.socket,msg,sizeof(msg));
            write(newMatch.red.socket,msg,sizeof(msg));
        }
        mode++;
    }
    close(newMatch.blue.socket);
    close(newMatch.red.socket);
    return;
}
// void* write_thd(void* socket)
// {
// 	int* sock = (int*)socket;
// 	char msg[100];
// 	while(1)
// 	{
// 		scanf("%s",msg);
// 		if(strcmp("EnD",msg)==0)
// 		{
// 			write(*sock,msg,sizeof(msg));

// 			break;
// 		}
// 		write(*sock,msg,sizeof(msg));
// 		printf("Sent data to server : %s\n",msg);
// 	}
// 	close(*sock);
// 	printf("closing socket\n");
// }
// void* read_thd(void* socket)
// {
// 	int * sock = (int*)socket;
// 	char msg[100];
// 	int len;
// 	while(1)
// 	{
// 		len = read(*sock,msg,sizeof(msg));
// 		printf("Received data from server : \n");
// 		for(int i = 0; i< 100; i++)
// 		{
// 			printf("%d",msg[i]);
// 		}
// 		printf("\n");
// 		//printf("Received data from server : %s\n",msg);
// 	}
// }
