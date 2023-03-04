#include <stdio.h>
int main(void)
{
	int sum = 0;
	int target = 100;
	int input = 0;
	do 
	{
		scanf("%d",&input);
		sum += input;
	}while(sum < target);
	printf("%d\n",sum);
}
