#include <stdio.h>



int main(void)
{
    int input = 0;
    long long longInt = 100000000000000000;
    float realNumber = 0.01;
    double realNumberD = 0.01;
    char character = 'f';
    char string[] = "helloWorld";
    printf("Hello World\r\n");
    printf("int : %d\n",input);
    printf("long long : %lld\n",longInt);
    printf("realNumber %.50f\n",realNumber);
    printf("reaNumberD %.50lf\n",realNumberD);
    printf("%c\n",character);
    printf("%s\n",string);

    int a,b;
    a = 10; b = 15;
    int c = a+b;
    printf("%d\n",c);
    return 0;
}