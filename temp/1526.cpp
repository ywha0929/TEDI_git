#include <iostream>
using namespace std;
int main(void)
{
    int N,M;
    scanf("%d%d",&N,&M);
    int temp = 0;
    int flag = 0;
    int count = 0;
    for(int i = M; i>=N;i--)
    {
        temp = i;
        while(temp != 0)
        {
            flag = 1;
            int digit = temp % 10;
            if(digit !=4 && digit != 7)
            {
                flag = 0;
                break;
            }
            else
            {
                
                temp = temp/10;
            }
            
        }
        if(flag == 1)
        {
            count++;
        }

    }
    cout<<count<<endl;
}