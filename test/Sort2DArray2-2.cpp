//test 1 sort 2D Array 2-2
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int numCols, numRows;
    cout<<"number of column: ";
    cin>>numCols;
    cout<<endl;
    cout<<"number of row: ";
    cin>>numRows;
    cout<<endl;
    cout<<"before sorting: "<<endl; 
    char arr[numRows][numCols];
    for (int i=0; i<numRows; i++)
    {
        for(int j=0; j<numCols; j++)
        {
            int r = rand()%25+'a';
            char ch = (char)r;
            arr[i][j] = ch;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //sort by rows
    for(int k=0; k<numRows*numCols; k++)
    {
        for(int l=0; l<numRows; l++)
        {
            for(int m=0; m<numCols-1; m++)
            {
                if(arr[l][m] >arr[l][m+1])
                {
                    int temp = arr[l][m];
                    arr[l][m] = arr[l][m+1];
                    arr[l][m+1] = temp;
                }
                        
            }
                    
        }
        for (int o=0; o<numCols; o++)
    {
        for(int p=0; p<numRows-1; p++)
        {
            if(o%2==0)
            {
                if(arr[p][o]>arr[p+1][o])
                {
                    int temp = arr[p][o];
                    arr[p][o] = arr[p+1][o]; 
                    arr[p+1][o] = temp; 
                }
            }else 
            {
                if(arr[p][o]<arr[p+1][o])
                {
                    int temp = arr[p][o];
                    arr[p][o] = arr[p+1][o];
                    arr[p+1][o] = temp; 
                }
            }
        }
    }
             
    }
    cout<<"Array after sorting:"<<endl;
    for(int i=0; i<numRows; i++)
    {
        for(int j=0; j<numCols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
    
    
    

}