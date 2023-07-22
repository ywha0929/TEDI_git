#include <arpa/inet.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>
#define Size 20
void *write_thd(void *socket);
void *read_thd(void *socket);

void printBoard(char board[][Size]) {
  for (int i = 0; i < Size + 1; i++) {
    for (int j = 0; j < Size + 1; j++) {
      if (i == 0 && j == 0) {
        printf("  ");
      } else if (i == 0 && j != 0) {
        printf("%2d", j - 1);
      } else if (i != 0 && j == 0) {
        printf("%2d", i - 1);
      } else {
        if (board[i - 1][j - 1] == 'X')
          printf("\033[0;31m");
        else if (board[i - 1][j - 1] == 'O')
          printf("\033[0;34m");
        printf("%2c", board[i - 1][j - 1]);
        printf("\033[0m");
      }

      printf(" ");
    }
    printf("\n");
  }
}

int main(void) {
  char port[6] = "21234";
  char msg[500] = {
      0,
  };
  char ip[16] = "210.107.198.230";
  printf("Insert ip addr : ");
  // printf("192.168.0.22\n");
  // scanf("%s",ip);500
  // printf("Insert port num : %s\n",port);
  // scanf("%s",port);
  struct sockaddr_in serv_addr;
  int sock = socket(PF_INET, SOCK_STREAM, 0);
  if (sock == -1) {
    printf("socket error\n");
  }
  memset(&serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = inet_addr(ip);
  serv_addr.sin_port = htons(atoi(port));
  if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == -1) {
    printf("connect() error\n");
    return 0;
  }
  // printf("connect() error\n");
  else {
    printf("Connection with %s:%s successfully done!\n", ip, port);
  }

  int len = read(sock, msg, sizeof(msg));
  printf("Received data from server : %s\n", msg);
  close(sock);

  // struct sockaddr_in serv_addr;
  sock = socket(PF_INET, SOCK_STREAM, 0);
  if (sock == -1) {
    printf("socket error\n");
  }
  memset(&serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = inet_addr(ip);
  serv_addr.sin_port = htons(atoi(msg));
  if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == -1) {
    printf("connect() error\n");
    return 0;
  }
  // printf("connect() error\n");
  else {
    printf("Connection with %s:%s successfully done!\n", ip, msg);
  }

  scanf("%s", msg);
  write(sock, msg, sizeof(msg)); // name
  char msg2[500] = {
      0,
  };
  int mode = 0;

  read(sock, msg2, sizeof(msg2)); // newMatch
  printf("%s\n", msg2);

  read(sock, msg2, sizeof(msg2)); // mode
  mode = atoi(msg2);
  printf("mode : %s\n", msg2);
  printf("mode : %d\n", mode);

  read(sock, msg2, sizeof(msg2)); // Board
  printf("Board : %s\n", msg2);
  while (1) {
    if (mode % 2 == 0) {
      printf("myturn\n");
      int x = 0, y = 0;
      read(sock, msg2, sizeof(msg2));
      // read(sock, msg2, sizeof(msg2)); // turn
      printf("turn smg : %s\n", msg2);

      scanf("%d%d", &x, &y);
      for (int i = 0; i < 1000; i++)
        msg2[i] = 0;
      sprintf(msg2, "%d, %d\n", y, x);
      write(sock, msg2, sizeof(msg2));

    } else {
      printf("waiting\n");
    }
    int count = 0;
    // ioctl(sock, FIONREAD, &count);
    // printf("%d\n", count);
    // while (count < 500) {
    //   ioctl(sock, FIONREAD, &count);
    //   printf("%d\n", count);
    // }
    int len = read(sock, msg2, sizeof(msg2)); // Board
    if (len != 500)
      len = read(sock, msg2, sizeof(msg2)); // Board
    printBoard(msg2);
    len = read(sock, msg2, sizeof(msg2));
    if (len != 500)
      len = read(sock, msg2, sizeof(msg2));
    if (atoi(msg2) == 1) {
      printf("You Win!\n");
      break;
    } else if (atoi(msg2) == -1) {
      printf("You Lose!\n");
      break;
    } else {
    }
    mode++;
  }
  close(sock);

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
  // pthread_t p_thread[2];
  // int status;
  // pthread_create(&p_thread[0],NULL,write_thd,(void*)&sock);
  // pthread_create(&p_thread[1],NULL,read_thd,(void*)&sock);

  // pthread_join(p_thread[0],(void**)&status);
  // pthread_join(p_thread[1],(void**)&status);

  // printf("closing socket\n");
  // close(sock);
  return 0;
}
// void *write_thd(void *socket) {
//   int *sock = (int *)socket;
//   char msg[100];
//   while (1) {
//     scanf("%s", msg);
//     if (strcmp("EnD", msg) == 0) {
//       write(*sock, msg, sizeof(msg));

//       break;
//     }
//     write(*sock, msg, sizeof(msg));
//     printf("Sent data to server : %s\n", msg);
//   }
//   close(*sock);
//   printf("closing socket\n");
// }
// void *read_thd(void *socket) {
//   int *sock = (int *)socket;
//   char msg[100];
//   int len;
//   while (1) {
//     len = read(*sock, msg, sizeof(msg));
//     printf("Received data from server : %s\n", msg);
//   }
// }
