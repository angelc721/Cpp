//Challenge 1-5
#include <iostream> 
using namespace std; 
int main()
{
    int sum=0,a,b,minL,maxL; 
    cout<<"1st multiple: ";
    cin>>a; 
    cout<<"2nd multiple: ";
    cin>>b; 
    cout<<"From: "; 
    cin>>minL; 
    cout<<"To: ";
    cin>>maxL; 
    for(int i=minL; i<maxL; i++)
    {
        if(i%a==0 or i%b==0)
        {
            sum+=i; 
        }
    }
    cout<<sum; 
    return 0; 
}