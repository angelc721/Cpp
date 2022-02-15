//Challenge 1-3
#include <iostream>
using namespace std; 
int main()
{
    int sum=0, first, second;
    cout<<"1st multiple: ";
    cin>>first;
    cout<<"2nd multiple: ";
    cin>>second; 
    for(int i=0; i<100; i++)
    {
        if(i%first==0 or i%second==0)
        {
            sum+=i;
        }
    }
    cout<<sum; 
    return 0; 
}