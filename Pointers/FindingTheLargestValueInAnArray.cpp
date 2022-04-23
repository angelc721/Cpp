//Finding the Largest Value in an Array 100 pts
#include <iostream> 
#include <stdio.h>
using namespace std; 
int main()
{
    int arr[10]; 
    srand(time(NULL));
    cout<<"Find largest value in an array: "; 
    int *p; 
    for(int i=0; i<10; i++)
    {
        int randVal = rand()%100+1;
        arr[i] = randVal;
        p = &arr[0]; 
        cout<<*(p+i)<<" "; 
    }
    int *maxVal = p; 
    for(int j=0; j<10; j++)
    {
        if(*maxVal<*(p+j))
        {
            *maxVal = *(p+j);
        }else
        {
            *maxVal = *maxVal; 
        }
    }
    cout<<endl; 
    cout<<"Max: "<<*maxVal; 

}