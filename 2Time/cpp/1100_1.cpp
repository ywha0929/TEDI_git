#include <iostream>

using namespace std;

int main(void)
{
    int count = 0;
    char input = 0;
    for(int i = 0; i<64; i++)
    {
        cin>>input;
        if(((i%8)+(i/8))%2==0 && input == 'F')
        {
            count++;
        }
    }
    cout<<count<<endl;
}