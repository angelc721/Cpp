//pointers #2 
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float arr[3]={5,6,7}; // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;
    
    for (int i = 0; i < 3; ++i) // use for loop to print addresses of all array elements
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    
    for (int i = 0; i < 3; ++i) // use for loop to print addresses of all array elements
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl; // using pointer notation
    }

    cout<<"\nDisplaying value using pointers: "<< endl;

    
   
    for (int i = 0; i < 3; ++i) // use for loop to print addresses of all array elements
    {
        cout << "ptr + " << i << " = "<< *(ptr + i) << endl;  // using pointer notation
    }
    return 0;
}