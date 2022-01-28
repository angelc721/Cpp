//Nested loops basic nested loops 50 pts
#include <iostream>
#include <string>
using namespace std; 
int main()
{
    for(int i=0; i<=5; i++)
    {
        cout<<endl; 
        for(int j=0; j<=5; j++)
        {
            cout<<"("<<i<<","<<j<<")"; 
        }
    }
    return 0; 
}