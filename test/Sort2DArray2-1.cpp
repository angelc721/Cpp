//test 1 sort 2D Array 2-1 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int m, n;
    cout<<"number of column: ";
    cin>>m;
    cout<<endl;
    cout<<"number of row: ";
    cin>>n;
    cout<<endl;

    char a[m][n];
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int r = rand()%25+'a';
            char ch = (char)r;
            a[i][j] = ch;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}