#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(void)
{
    int T;
    int N, M;
    scanf("%d",&T);
    for(int i = 0; i<T; i++)
    {
        scanf("%d%d",&N,&M);
        long long S=0;
        long long B=0;
        long long temp = 0;
        for(int j = 0; j< N; j++)
        {
            scanf("%lld",&temp);
            S = S>temp?S:temp;
        }
        temp = 0;
        for(int j = 0; j< M; j++)
        {
            scanf("%lld",&temp);
            B = B>temp?S:temp;
        }
        if(S >= B)
        {
            cout<<"S"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }

    }
    return 0;

    int t;
    for(scanf("%d",&t);t--;){
        int n,m,x,p=0,q=0;
        scanf("%d%d",&n,&m);
        while(n--)
        {
            scanf("%d",&x);
            p = p>x?p:x;
        }
        while(m--)
        {
            scanf("%d",&x);
            q = q>x?q:x;
        }
        puts(p<q?"B":"S");
    }
    // long arr1[1000000];
    // long arr2[1000000];
    // for(int i = 0; i< T; i++)
    // {
    //     scanf("%d%d",&N,&M);
    //     for(int i = 0; i<N;i++)
    //     {
    //         scanf("%ld",&arr1[i]);
    //     }
    //     for(int i = 0; i<M;i++)
    //     {
    //         scanf("%ld",&arr2[i]);
    //     }
    //     sort(arr1,arr1+N);
    //     sort(arr2,arr2+M);
    //     while(1)
    //     {
    //         int n=0, m=0;
    //         if(arr1[n] < arr2[m])
    //         {
    //             n++;
    //         }
    //         else
    //         {
    //             m++;
    //         }
    //         if(n==N)
    //         {
    //             cout<<"B"<<endl;
    //             return 0;
    //         }
    //         if(m==M)
    //         {
    //             cout<<"S"<<endl;
    //             return 0;
    //         }
    //     }
    // }
}