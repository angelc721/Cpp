//test 1-1 sort 2D array 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int m, n;
    cout<<"Type in the column: ";
    cin>>m;
    cout<<endl;
    cout<<"Type in the row: ";
    cin>>n;
    cout<<endl;

    char arr[m][n];
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int r = rand()%25+'a';
            char ch = (char)r;
            arr[i][j] = ch;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}