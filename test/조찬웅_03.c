#include<stdio.h>
int main(){
char n;
scanf("%c", &n);
switch(n){
    case 'A' : 
        printf("��ȣ! 1�����̴�!");
        break;
    case 'B' : 
        printf("��ȣ! 5õ���̴�!");
        break;
    case 'C' : 
    	printf("��ȣ! 1õ���̴�!");
        break;
    case 'D' : 
        printf("������... 2��?...");
        break;
    case 'E' : 
        printf("������... 2��?...");
        break;
    case 'F' : 
        printf("������... 2��?...");
        break;
        
    default :    
        printf("����� �Է��Ͻÿ�");
}
}
