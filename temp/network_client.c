#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include <pthread.h>

void* write_thd(void* socket);
void* read_thd(void* socket);
int main(void)
{
	char port[6]="21234";
	char msg[100];
	char ip[16]="127.0.0.1";
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
	/*
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
	pthread_t p_thread[2];
	int status;
	pthread_create(&p_thread[0],NULL,write_thd,(void*)&sock);
	pthread_create(&p_thread[1],NULL,read_thd,(void*)&sock);

	pthread_join(p_thread[0],(void**)&status);
	pthread_join(p_thread[1],(void**)&status);

	//printf("closing socket\n");
	//close(sock);
	return 0;
}
void* write_thd(void* socket)
{
	int* sock = (int*)socket;
	char msg[100];
	while(1)
	{
		scanf("%s",msg);
		if(strcmp("EnD",msg)==0)
		{
			write(*sock,msg,sizeof(msg));

			break;
		}
		write(*sock,msg,sizeof(msg));
		printf("Sent data to server : %s\n",msg);
	}
	close(*sock);
	printf("closing socket\n");
}
void* read_thd(void* socket)
{
	int * sock = (int*)socket;
	char msg[100];
	int len;
	while(1)
	{
		len = read(*sock,msg,sizeof(msg));
		printf("Received data from server : %s\n",msg);
	}
}
