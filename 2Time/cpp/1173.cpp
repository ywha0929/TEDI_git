#include <iostream>

using namespace std;
int main(void)
{
    int N=0;
    int m = 0;
    int M = 0;
    int T = 0;
    int R = 0;
    int total = 0;
    int current = 0;
    int work = 0;
    scanf("%d%d%d%d%d",&N,&m,&M,&T,&R);
    current = m;
    if( current + T > M)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        while(1)
        {
            if(current + T > M)
            {
                current -=R;
                if(current < m)
                    current = m;
                total++;
            }
            else
            {
                current +=T;
                total++;
                work++;
            }

            if(work == N)
                break;
        }
        cout<<total<<endl;
        return 0;
    }
}