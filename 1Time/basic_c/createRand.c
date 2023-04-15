#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL)+1000);
	while(1)
	{
		int randd = rand()%3;
		if(randd==0)
			printf("가위\n");
		else if(randd==1)
			printf("바위\n");
		else
			printf("보\n");
	}
}
