//test 1 sort 2D array 1-2 
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    char arr[n];
    
    cout<<endl;
    cout<<"Array before sorting: ";
    for (int i=0; i<=n; i++)
    {
        arr[i]= rand()%25+'a';
        cout<<arr[i]<<" ";
    }
    for (int i=0; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }

        }
    }
    cout <<"\n";
    cout <<"Array after sorting: ";
    for(int i=0; i<=n; i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;

}