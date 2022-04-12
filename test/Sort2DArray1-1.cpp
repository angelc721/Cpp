//test 1-1 sort 2D array 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;

    cout<<"Enter the number of element: ";
    cin>>n;
    char arr[n];
    
    cout<<endl;
    for (int i=0; i<=n; i++)
    {
        arr[i]= rand()%25+'a';
        cout<<arr[i]<<" ";
    }
    return 0;

}