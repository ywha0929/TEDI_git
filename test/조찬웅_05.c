#include <stdio.h>
int main(){
	int b, i, temp=1;

	printf("Áö¼ö:"), scanf("%d", &b);
	
	for(i=0;i<b;i++){	
		temp=temp*2;      
	}
	printf("2^%d = %d",b, temp);
	return 0;
}
