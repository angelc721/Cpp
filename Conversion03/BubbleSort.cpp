//Sorting bubble sort 130 pts
#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <ctime>
using namespace std; 

int main()
{
    srand (time(NULL));
    int size = sizeoff(arr)/sizeoff(arr[0]); 
    for (int i=0; i<size; i++)
    {
        arr[i] = rand()%100+1; 
    }
    cout<<"Array before sorting: "<<endl; 
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
    return 0; 
}



