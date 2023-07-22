#include <iostream>
using namespace std;
int main(void)
{
    int n = 0;
    cin >> n;
    int M=0;
    int Y=0;
    int t=0;
    for(int i =0; i< n; i++)
    {
        cin>>t;
        Y += (t/30 + 1) * 10;
        M += (t/60 + 1) * 15;

    }
    if(M < Y)
    {
        cout<<"M "<<M << endl;;
    }
    else if(M == Y)
    {
        cout<<"Y M "<<M << endl;;
    }
    else if( Y < M)
        cout<<"Y "<<Y << endl;;
}