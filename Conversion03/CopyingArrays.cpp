//Arrays Copying Arrays 55 pts Angel Chuang
#include <iostream> 
#include <string>
#include <stdio.h>
#include <ctime> 
using namespace std; 
int main()
{
    srand(time(NULL));
    int arr[10];
    int arrb[10]; 
    for (int i = 0; i<10; i++)
    {
        int randomnumber = rand()%100+1;
        arr[i] = randomnumber;
        arrb[i] = randomnumber;
    }
    arr[9] = -7;
    cout<<"Array 1: ";
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    cout<<"Array 2: ";
    for(int i=0; i<10; i++)
    {
        cout<<arrb[i]<<" "; 
    }
    return 0; 

}