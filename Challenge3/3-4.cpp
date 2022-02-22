//Challenge 3-4
#include <iostream>
#include <cmath> 
using namespace std; 
int sum; 
int findSum(int n)
{
    int t = 0;
    for(int i=2; i<355000; i++)
    {
        sum=0;
        
        int num=1;
        int digit=i;
        int temp=1;
        while(digit>0)
        {
            temp=pow(digit%10,n);
            digit/=10;
            sum+=temp;
        }
        if(sum==i)
        {
            t+=i;
            cout<<sum<<endl; 
        }
    }
     return t;  
}
int main()
{
    int s; 
    cout<<"How many digits: ";
    cin>>s; 
    int a=findSum(s);
    cout<<"Sum is: "<<a<<endl; 
    return 0; 
}

