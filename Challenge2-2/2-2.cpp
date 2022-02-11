//Challenge 2-2
#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
    unsigned long long result = 0, modulo = 10000000000;
    for(int i=1; i<=1000; i++)
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