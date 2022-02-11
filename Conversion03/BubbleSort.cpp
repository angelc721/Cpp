//Sorting bubble sort 130 pts
#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <ctime>
using namespace std; 

int main()
{
    srand (time(NULL));
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]); 
    for (int i=0; i<size; i++)
    {
        arr[i] = rand()%100+1; 
    }
    cout<<"Array before sorting: "; 
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 

    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    cout<<"Array after sorting: "; 
    for(int i=0; i<size-1; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
    
    return 0; 
}



