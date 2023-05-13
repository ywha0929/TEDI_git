#include <iostream>
using namespace std;
int main(void) {
    char input;
    char prev=0;
    int num=1;
    input = getchar();
    while(input != '\n')
    {
        prev= input;
        input = getchar();
        if(input == ' ')
            num++;
    }
    if(prev == ' ')
        num--;
    if(prev== 0)
        num--;
    cout<<num<<endl;
}