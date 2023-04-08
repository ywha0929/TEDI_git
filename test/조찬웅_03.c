#include<stdio.h>
int main(){
char n;
scanf("%c", &n);
switch(n){
    case 'A' : 
        printf("야호! 1만원이다!");
        break;
    case 'B' : 
        printf("야호! 5천원이다!");
        break;
    case 'C' : 
    	printf("야호! 1천원이다!");
        break;
    case 'D' : 
        printf("숙제가... 2배?...");
        break;
    case 'E' : 
        printf("숙제가... 2배?...");
        break;
    case 'F' : 
        printf("숙제가... 2배?...");
        break;
        
    default :    
        printf("제대로 입력하시오");
}
}
