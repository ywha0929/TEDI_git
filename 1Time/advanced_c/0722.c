#include <pthread.h>
#include <stdio.h>


void* check_thd(void* num);
int main(void)
{
    pthread_t p_thread[2];
	int status;

    int num1= 1;
    int num2 = 2;
	pthread_create(&p_thread[0],NULL,check_thd,(void*)&num1);
	pthread_create(&p_thread[1],NULL,check_thd,(void*)&num2);

	pthread_join(p_thread[0],(void**)&status);
	pthread_join(p_thread[1],(void**)&status);
}

void* check_thd(void* num)
{
    int id = *((int*) num);
	for(int i = 0; i< 100000; i++)
    {
        printf("%d : %d\n",id,i);
        for(int i = 0; i< 5000; i++);
    }
}