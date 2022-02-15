//Challenge 1-4 
#include<iostream>
using namespace std; 
int main()
{
    int sum=0, first, second, max;
    cout<<"1st multiple: ";
    cin>>first; 
    cout<<"2nd multiple: ";
    cin>>second; 
    cout<<"Below: "; 
    cin>>max; 
    for(int i=0; i<max; i++)
    {
        if(i%first==0 or i%second==0)
        {
            sum+=i;
        }
    }
    cout<<sum; 
    return 0; 
}