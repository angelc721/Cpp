//Challenge 2-3
#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
    unsigned long long result = 0, modulo = 10000000000, start, end;
    cout<<"Start point: ";
    cin>>start; 
    cout<<"End point: ";
    cin>>end; 
    for(int i=start; i<=end; i++)
    { 
        long temp = i;
        for(int j=1; j<i; j++)
        {
            temp = temp * i; 
            temp = temp%modulo; 
        }
        result = result + temp; 
        result = result % modulo;
    }
    cout<<result; 
    return 0; 
} 