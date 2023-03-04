#include <stdio.h>
int main(void)
{
	int input = 0;
	scanf("%d",&input);
	// char prev = ' ';
	int i = 1;
	while(i <= input)
	{
		if(input % i == 0)
			printf("%d ",i);
		i++;
	}
	printf("\n");
	// while(1)
	// {
	// 	scanf("%c",&c);
	// 	if(c == 'w')
	// 		prev = c;
	// 	if(prev == 'w' && c == 'q')
	// 		break;
	// 	// printf("%c",c);
	// }
	return 0;
}
