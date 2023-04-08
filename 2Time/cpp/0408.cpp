
#include <iostream>
#include <set>
#include <vector>
#include <random>
#include <time.h>
#include <algorithm>
using namespace std;
int main(void)
{
    set<int> s;
    srand(time(NULL));
    vector<int> arr1;
    int arr2[10000];
    int size = 10000;
    for(int i = 0; i< size; i++)
    {
        arr1.push_back(rand()%1000);
        arr2[i] = arr1[i];
    }
    //sort by bubble
    clock_t start;
    clock_t end;
    start = clock();
    for(int i =0; i<size; i++)
    {
        for(int j = 0; j<size-i; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                int temp =arr1[j+1];
                arr1[j+1] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    end = clock();
    cout << end-start<<endl;
    
    start = clock();
    sort(arr1.begin(),arr1.end());
    end = clock();
    cout << end-start<<endl;


    start = clock();
    for(int i = 0; i< size; i++)
    {
        s.insert(arr2[i]);
    }
    int i = 0;
    for( set<int>::iterator it = s.begin(); it!= s.end();it++)
    {
        arr2[i] = *it;
        i++;
    }
    end = clock();
    cout << end-start<<endl;
    set<int>::iterator it = s.find(50);
    if(it == s.end())
        cout<<"no 50"<<endl;
    else
        cout<<*it<<endl;
}