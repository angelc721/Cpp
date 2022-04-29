//cpp practice test #2 
#include <iostream> 
#include <vector> 
#include <stdio.h>
#include <algorithm> 
using namespace std; 
void method1()
{
//printing out line by line
cout<<"1 2 3\n";
cout<<"4 5 6\n";
cout<<"7 8 9\n";
}
void method2()
{
      int arr[] = {1,2,3,4,5,6,7,8,9};
      cout<<arr[0]<<arr[1]<<arr[2]<<endl;
      cout<<arr[3]<<arr[4]<<arr[5]<<endl;
      cout<<arr[6]<<arr[7]<<arr[8]<<endl;
}
void method3()
{
    int n=1;
   for(int i=1; i<=3; i++)
   {
       for(int j=1; j<=3; j++)
       {
           cout<<n;
           n++;
       }
       cout<<endl;
   }
}
void method4()
{
    int num=123;
   for(int i=0; i<3; i++ )
   {
       cout<<(num+i*333)<<endl;
   }
}
void method5()
{   
    const int m=3, n=3; 
    int mat[m][n] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mat[i][j]<<" "; 
        }
        cout<<endl; 
    }
}
void method6()
{
    for(int i=1; i<8; i=i+3)
    {
        cout<<i<<(i+1)<<(i+2)<<endl; 
    }
}
void method7()
{
    for(int i=1; i<10; i++)
    {
        cout << i <<" ";
        if(i%3==0)
        {
            cout<<"\n";
        }
    }
}
void method8()
{
    int j=0;
    while(j<3)
    {
        int i=0;
        while(i<3)
        {
            i++;
            cout<<(j*3)+i<<" ";
        }
        cout<<endl;
        j++;
    }
}
void method9()
{
    int j=0;
    do{
        int i=0;
        do{
            i++;
        cout<<(j*3)+i<<" "; 
        }while(i<3); 
    cout<<endl; 
    j++; 
    } while(j<3); 
}
void method10()
{
    int counter =1; 
    int i =0; 
    while(i<3)
    {
        int j=0; 
        do{
            cout<<counter<<" ";
            counter++;
            j++;
        }while(j<3);
        cout<<endl;
        i++;
    }
}
void method11()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j];  
        }
        cout<<"\n"; 
    }
    
}
void method12()
{
    int m=3, n=3; 
    int a[3*3] = {1,2,3,4,5,6,7,8,9};
    int *ptr = a; 
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d", *(ptr + (n*i+j))); 
        }
        printf("\n");
    }
}
void method13()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int temp; 
    for(int a=0; a<9; a++)
    {
        for(int b=0; b<8; b++)
        {
            if(arr[b]>arr[b+1])
            {
                temp = arr[b];
                arr[b] = arr[b+1]; 
                arr[b+1] = temp; 
            }else{}
        }
    }
    for(int c=0; c<9; c++)
    {
        cout<<arr[c]; 
        if(c%3 == 2)
        {
            cout<<endl; 
        }else{}
    }
}
void method14()
{
    for(int i=1; i<=9; i++)
    {
        cout<<i;
        if(i==3||i==6)
        {
            cout<<endl; 
        }
    }
    cout<<endl; 
}
void printArray2D(int* list, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<list[i*col+j]<<" "; 
        }
        cout<<endl; 
    }
}
void method15()
{
    int list1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row1 = sizeof(list1)/sizeof(list1[0]); 
    int col1 = sizeof(list1[0])/sizeof(list1[0][0]);
    printArray2D((int*)list1, row1, col1); 
}
void print(vector <int> const &a) 
{
    for(int count = 0; count < 3; count++){
        cout << a.at(count) << ' ';
    }
    cout << endl;
    for(int count = 3; count < 6; count++){
           cout << a.at(count) << ' ';
    }
    cout << endl;
    for(int count = 6; count < 9; count++){
        cout << a.at(count) << ' ';
    }
}
void method16()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9};
   print(a);
}
int main()
{
    method1();
    method2();
    method3();
    method4();
    method5();
    method6();
    method7();
    method8();
    method9(); 
    method10(); 
    method11();
    method12(); 
    method13(); 
    method14();
    method15(); 
    method16(); 
}
