#include <stdio.h>
int main(void)
{
    int n = 0;
    int arr[23] = {0, };
    int input=0;
    scanf("%d",&n);
    for(int i =0 ; i< n ; i++)
    {
        scanf("%d",&input);
        arr[input-1]++;
    }
    for(int i = 0; i<23;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}