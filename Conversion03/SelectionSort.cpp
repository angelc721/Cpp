//Sorting Selection Sort 130 pts
#include <iostream> 
#include <stdlib.h>
#include <stdio.h> 
#include <ctime>
using namespace std; 

int main()
{
    srand(time(NULL)); 
    int arr[10];
    int min_idx; 
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

    for(int i=0; i<size-1; i++)
    {
        min_idx = i; 
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j; 
                int temp=arr[min_idx];
                arr[min_idx]=arr[i];
                arr[i]=temp; 
            }
        }
    }
    cout<<"after : ";
		for ( int i=0; i<size; i++ )
			cout<<arr[i]<<" ";
		cout<<endl; 
    return 0; 
}