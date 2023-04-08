#include<stdio.h>
int main(){
  int n;
  scanf("%s",&n);
  char score= n;
switch(score){
    case 'A' : 
        printf("야호 용돈 1만원");
        break;
    case 'B' : 
        printf("야호 용돈 5천원");
        break;  
    case'c' : 
        printf("야호 용돈 1천원");
        break; 
    default :    
        printf("숙제가....2배?...");
 }
}

