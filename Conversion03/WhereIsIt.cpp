//Arrays Where is it? 90 pts 
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime> 
using namespace std; 
int main()
{
    int arr[10]; 
    int x=0;
    srand(time(NULL));
    cout<<"Array: ";
    for(int i=0; i<10; i++)
    {
        int r = rand()%50+1; 
        arr[i] = r; 
        cout<< arr[i]<<" "; 
    }
    cout<<"\nValue to find: ";
    cin >>x; 
    for(int i=0; i<10; i++)
    {
        if(x==arr[i])
        {
            cout<<x<<" is in slot "<<i<<endl; 
        }
    }
    return 0; 
    
}