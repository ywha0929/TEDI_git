#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    FILE* fp2 = fopen("a.txt","r");
    char line[1000];
    fscanf(fp2,"%s",line);
    int sum = 0;
    while(strcmp(line,"quit") != 0)
    {
        sum += atoi(line);
        fscanf(fp2,"%s",line);
    }
    printf("%d\n",sum);
    fclose(fp2);
}