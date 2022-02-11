//Sorting Sorting an array 100 pts 
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
    cout<<"Array before sorting: "<<endl; 
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 

    for ( int i=0; i<size; i++ )
		{
			for ( int j=i+1; j<size; j++ )
			{
				if ( arr[i]>arr[j])
				{
					int temp =arr[i];
					arr[i] = arr[j];
                    arr[j] = temp;
				}
			}
		}
    cout<<"after : ";
		for ( int i=0; i<size; i++ )
			cout<<arr[i]<<" ";
		cout<<endl; 
    return 0; 
}