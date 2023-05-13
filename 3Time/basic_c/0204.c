#include <stdio.h>

int main(void)
{
    int integer =  102;
    float realNumber = 0.01;
    double realNumberD = 0.01;
    char character = 'f';
    long long integerL = 100000000000000;

    printf("%c\n",integer);
    printf("%.30f\n",realNumber);
    printf("%.30lf\n",realNumberD);
    printf("%d\n",character);
    printf("%lld\n",integerL);
    
    printf("hello\" world\n");
    // int inputA = 0;
    // int inputB = 0;
    // int inputC = 0;
    // int inputD = 0;
    // int inputE = 0;
    // scanf("%c",&inputA);
    // scanf("%c",&inputB);
    // scanf("%c",&inputC);
    // scanf("%c",&inputD);
    // scanf("%c",&inputE);
    // printf("%d\n",inputA + inputB + inputC + inputD + inputE);
    int inputA = 0;
    int inputB = 0;
    scanf("%d %d",&inputA,&inputB);
    printf("%lf",(double)inputA/inputB);
    return 0;
}