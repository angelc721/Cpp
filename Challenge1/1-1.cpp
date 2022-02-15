//challenge 1-1 
#include <iostream>
using namespace std;
int main()
{
    int totalsum=0;
    for(int i=3; i<10; i++)
    {
        if(i%3==0 or i%5==0)
        {
            totalsum += i; 
        }
    }
    cout<<totalsum; 
    return 0; 
}