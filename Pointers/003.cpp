#include <iostream>
using namespace std;
const int M = 3; //declare the constant M and N 
const int N = 3;
void printArr(int *array, int sizeArr){ //create a function to print the array
    for(int i=0;i<sizeArr;i++) //print out each element of the array 
    cout<<*(array+i)<<endl;
}
void print2D(int arr[M][N]){ //create a function to print out the 2d array 
    for (int i = 0; i < M; i++){  //find the value of M
      for (int j = 0; j < N; j++){ //find the value of N 
        cout<<arr[i][j]<<" "; //print out the 2D array 
        }cout<<endl;
    }
}
void print2DP(int *arr, int r, int c){ 
    for (int i = 0; i < r; i++){ //run through the row
      for (int j = 0; j < c; j++){ //run through the column 
        cout<<*(arr+i+j)<<" "; //print out the 2D array 
      }cout<<endl;
    }
}
int main()
{
    int arr[6]={3,6,2,5,3,1}; //Declare the array and print 
    printArr(&arr[0],6);
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print2D(arr2); //print the 2D array 
    cout<<endl;
    print2DP(&arr2[0][0],3,3); //print the rearrange array 
    return 0;
}