#include<stdio.h>
int main(){
  int n;
  scanf("%s",&n);
  char score= n;
switch(score){
    case 'A' : 
        printf("��ȣ �뵷 1����");
        break;
    case 'B' : 
        printf("��ȣ �뵷 5õ��");
        break;  
    case'c' : 
        printf("��ȣ �뵷 1õ��");
        break; 
    default :    
        printf("������....2��?...");
 }
}

