#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int m,n;
    int l = 0; //number of lines
    char** arr;
    scanf("%d%d",&n,&m);
    l = m-n+1;
    arr = (char**) malloc(sizeof(char*) * l);
    for(int i = 0; i<l; i++)
    {
        int k = 0; // number of chars in one line
        k = i+n+1;
        arr[i] = (char*) malloc(sizeof(char) * k);
        for(int j = 0; j<k-1;j++)
            arr[i][j] = '*';
        arr[i][k-1] = '\0';
    }
    for(int i = 0; i< l; i++)
        printf("%s\n",arr[i]);
    
}