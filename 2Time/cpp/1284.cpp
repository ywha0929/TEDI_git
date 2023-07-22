// #include <iostream>
// #include <string>

// using namespace std;

// int main(void)
// {
//     while(1){
//         string input;
//         cin >> input;
//         if(input.compare("0") == 0)
//             break;
//         int count = 0;
//         for(int i = 0; i< input.length(); i++)
//         {
//             if(input[i] == '0')
//                 count+=4;
//             else if(input[i] == '1')
//                 count+=2;
//             else
//                 count+=3;
//         }
//         count += (input.length() +1);
//         cout<<count<<endl;  
//     }
    
// }


#include <iostream>

using namespace std;

int main() {
    int size[10]={4,2,3,3,3,3,3,3,3,3};
    while(1){
        int input;
        int temp=0;
        int result=1;
        cin>>input;
        if(input==0){
            break;
        }
        while(input!=0){
            temp=input%10;
            input/=10;
            result=result+size[temp]+1;
        }
        cout<<result<<endl;
    }
}