//locating the largest value in an array
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main ()
{
    int arr[10];
    srand(time(NULL));
    cout<<"Find the largest value in an array: ";
    int *p;
    for(int i=0; i<10; i++)
    {
        int randVal = rand()%100+1;
        arr[i] = randVal;
        p = &arr[0];
        cout<<*(p+i)<<" ";
    }
    int *maxVal = p;
    int t;
    int *maxL = &t;
    for(int j=0; j<10; j++)
    {
        if(*(p+j) > *maxVal)
        {
            *maxVal = *(p+j);
            *maxL = j;
        }else
        {
            maxVal = maxVal;
        }
    }
    cout<<endl;
    // cout<<"Max: "<<*maxVal<<"at " <<*maxL;
    cout<<"Max: "<<*maxVal<<" at " <<*maxL;
    cout<<endl;
    
    return 0; 

}