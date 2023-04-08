#include<stdio.h>

int main ()
{
  int N,a;

  scanf("%d",&N);

  for(a=1;a<=N;a++){ 
    for(int j=0; j < a;j++){ 
      printf("*");
    }
    printf("\n");
  }

	for (int i = N-1; i > 0; i--) {
		for (int j = 0; j < i; j++)printf("*");
		printf("\n");
	}
	return 0;
}

